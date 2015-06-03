#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool isMatch(char* s, char* p) {
		if (*p == '\0')
			return *s == '\0';
		if (*(p + 1) != '*'){
			//��һ���ַ����ǡ�*��
			if ((*p == '.' && *s != '\0') || *p == *s)
				return isMatch(s + 1, p + 1);
			else
				return false;
		}
		else {
			//�¸��ַ��ǡ�*��
			while ((*p == '.'&& *s != '\0') || *p == *s){
				if (isMatch(s, p + 2))
					return true;
				s++;
			}
			//* ƥ��0��n����ǰ��Ԫ�� ��*���ھͻ�Ե�ǰ׺��ĸ
			return isMatch(s, p + 2);
		}
	}
};

int main()
{
	Solution solu;
	cout << solu.isMatch("ba","d*ba") << endl;

	int end;
	cin >> end;
}