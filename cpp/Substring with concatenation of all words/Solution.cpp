#include <unordered_map>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Solution 
{
public:
	/*
		ʹ�û������ڼ�¼�Ƿ���L�е�words��ͬ��������һ����ͬ����ֱ������������ʵ�ĩβ��
	������һ��ԭ���Ѿ��������ĵ��ʣ���Ѵ��ڵ���ʼλ�÷ŵ���һ�γ��ָõ��ʵ���һ��λ�ã�
	��¼�����еĵ��ʸ���������L�еĸ�����ͬ��Ѹ�λ�÷���result�С�
	Ϊ�˱�֤�������Դ�����λ�ó��֣�Ӧ��ѭ����һ�����ʵ�����λ�á�
	*/
	
// 	ʱ�临�Ӷ�O(n*m)���ռ临�Ӷ�O��m��
	vector<int> findSubstring(string S, vector<string> &L)
	{
		vector<int> res;
		int wordlength = L[0].length();
		if (L.size()*wordlength > S.size())
			return res;
		unordered_map<string, int> wordcount;
		for (auto iter_words = L.begin(); iter_words != L.end(); iter_words++)
			wordcount[*iter_words]++;
		
		for (int i = 0; i < wordlength; i++)  //ѭ����һ�����ʱ�֤���������ַ���������
		{
			unordered_map<string, int> wordcount2;
			int cnt = 0, winStart = i;
			for (int wordEnd = i; wordEnd <= S.size() - wordlength; wordEnd += wordlength)  
			{
				string word = S.substr(wordEnd, wordlength);
				if (wordcount.find(word)!=wordcount.end())  //����L�еĵ���
				{
					wordcount2[word]++;
					if (wordcount2[word] <= wordcount[word])  
						cnt++;
					else                                 //�ظ������Ѿ����ֵĵ��ʣ�������ʼλ���ƶ�����һ�γ��ֵĺ�����Ǹ�����λ��
					{
						for (int j = winStart;; j += wordlength)
						{
							string del_word = S.substr(j, wordlength);
							wordcount2[del_word]--;
							if (del_word == word)
							{
								winStart = j + wordlength;
								break;
							}
							cnt--;
						}
					}

					if (cnt == L.size())              
						res.push_back(winStart);
						
				}
				else
				{
					winStart = wordEnd + wordlength;
					wordcount2.clear();
					cnt = 0;
				}
			}
		}
		return res;
	}
};