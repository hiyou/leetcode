// 5.23.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x[10];
	int *p=x;
	cout<<sizeof(x)/sizeof(*x)<<endl;
	cout<<sizeof(p)/sizeof(*x)<<endl;
	return 0;
}

