// ��ά�����еĲ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int m, n;
	int num;
	int isNum;
	int mem;

	while (cin >> m >> n)
	{
		cin >> num;
		isNum = 0;

		for (int i = 0; i != m; i++)
		{
			for (int j = 0; j != n; j++)
			{
				cin >> mem;
				if (mem == num)
				{
					cout << "Yes" << endl;
					isNum = 1;
				}
			}
		}
		if (isNum==0)
		{
			cout << "No" << endl;
		}
	}
	return 0;

}

