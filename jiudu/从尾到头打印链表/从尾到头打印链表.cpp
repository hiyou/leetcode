// ��β��ͷ��ӡ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stack>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	stack<int> ista;
	int num;
	while (scanf("%d", &num) != EOF&&num != -1)
		ista.push(num);
	
	while (!ista.empty())
	{
		num = ista.top();
		ista.pop();
		printf("%d\n", num);
	}
		
	return 0;
}

