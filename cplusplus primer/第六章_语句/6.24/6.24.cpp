// 6.24.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <bitset>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	bitset<100> bit;
	for(size_t ix=0;ix!=bit.size();ix++)
		bit.set(ix);
	try
	{
		bit.to_ullong();
	}
	catch(overflow_error err)
	{
		cout<<err.what()<<endl;
	}
	return 0;
}

