#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:

	//˼·��Substring with concatenation of all word ���ƣ�ά��һ������
	//������map��¼��Ҫ���ҵĺ��Ѿ����ҵ�����ĸ������¼���ҵ���Ԫ������Ҫ���ҵ������еĸ����������ж��Ƿ��Ѿ�ȫ������
	//�ҵ�ȫ��������ĸ�󴰿ڵ�begin��ǰ�ƶ�ѹ������
	//end��0��s�е����һ����ĸ�������ҵ�ÿһ�����ڣ���¼��С����
	//ע����û��ƥ�䵽�����
	//ʱ�临�Ӷ�O��n�����ռ临�Ӷ�O(m) 
	string minWindow(string S, string T) 
	{
		string res = "";
		if (S.size() < T.size()||S.size()==0||T.size()==0)
			return res;
		unordered_map<char, int> needfind;
		unordered_map<char, int> hasfind;
		for (auto it = T.begin(); it != T.end(); it++)
			needfind[*it]++;

		int minbegin = 0;
		int minWindowsLength = S.size()+1;

		int begin = 0;
		int end ;
		int count = 0;
		for (end = 0; end < S.size(); end++)
		{
			if (needfind[S[end]]==0)
				continue;
			hasfind[S[end]]++;
			if (hasfind[S[end]] <= needfind[S[end]])
				count++;
			if (count == T.size())
			{
				while (begin < end)
				{
					if (needfind[S[begin]] == 0)
					{
						begin++;
						continue;
					}
					if (hasfind[S[begin]]>needfind[S[begin]])
					{
						hasfind[S[begin]]--;
						begin++;
						continue;
					}
					else
						break;
				}

				int newlength = end - begin + 1;
				if (newlength < minWindowsLength)
				{
					minbegin = begin;
					minWindowsLength = newlength;
				}
			}
		}
		
		if (minWindowsLength>S.size())
			return "";
		return S.substr(minbegin, minWindowsLength);
	}
};