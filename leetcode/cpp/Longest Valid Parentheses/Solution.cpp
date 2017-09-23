#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;
class Solution {
public:
	int longestValidParentheses(string s) {
		stack<int> stk;
		int maxValue = 0;
		//��ͷ��ʼ���������������������ջΪ�ա�����ջ��Ԫ�ؾͰ�Ԫ�������ջ������ͳ�ջ��ͳ�Ƴ���
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(' || stk.empty() || s[stk.top()] == ')')
				stk.push(i);
			else
			{									
				stk.pop();
				if (stk.empty())
					maxValue = max(maxValue, i + 1);
				else
					maxValue = max(maxValue, i - stk.top());
			}
		}
		return maxValue;
	}
};

int main()
{
	Solution solu;
	cout << solu.longestValidParentheses("()");

	int end;
	cin >> end;
}