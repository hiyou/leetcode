#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
	//ʹ�õݹ顢���ݷ�ʵ��
	vector<string> restoreIpAddresses(string s)
	{
		vector<string> res;
		string ip;
		restore(res, ip, s);
		return res;
	}
	//�ݹ�ʱ�ǵ���������
	void restore(vector<string> &res, string &ip, const string &s, int k = 1, int begin = 0)
	{
		//��ȡ��ip����Ϊ4�����
		if (k == 4)
		{
			string t = s.substr(begin);
			if (isLegal(t))
				res.push_back(ip + "." + t);
			return;
		}
		//ȡip�е�ÿһ�ε�ʱ���λ����0��ʼ��
		//ÿ�β�����3λ��
		for (int len = 1; len < 4 && len + begin<s.size(); len++)
		{
			string t = s.substr(begin, len);
			if (!isLegal(t))
				return;
			//������ǵ�һ����ӡ�.'
			if (k != 1)
				ip.push_back('.');
			ip.append(t);
			restore(res, ip, s, k + 1, begin + len);
			//ȥ����ǰ�Σ�ѡ��len+1 �Ķ����±���
			while (!ip.empty() && ip.back() != '.')
				ip.pop_back();
			if (!ip.empty())
				ip.pop_back();
			
		}
	}
	bool isLegal(string &s)
	{
		if (s.empty() || s.length() > 3 || (s.length() != 1 && s[0] == '0')) return false;
		//stoi����������stringתΪint��ֻ��תint�ڵ�ֵ
		int t = stoi(s);
		return t < 256;
	}
};

int main()
{
	Solution solu;
	for (auto i : solu.restoreIpAddresses("25525511135"))
		cout << i << endl;

	int end;
	cin >> end;
}