// 4.32.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
//��д�����int�������ʼ��vector����

int _tmain(int argc, _TCHAR* argv[])
{
	int a[9]={1,2,3,4,5,6,7,8,9};
	vector<int> vec(a,a+9);
	vector<int>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();iter++)
		cout<<*iter;
	return 0;
}

