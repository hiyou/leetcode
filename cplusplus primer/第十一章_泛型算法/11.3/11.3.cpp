// 11.3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> ivec;
	for(int i=0;i!=10;i++)
		ivec.push_back(i);
	cout<<"sum of ivec:	"<<accumulate(ivec.begin(),ivec.end(),0)<<endl;;
	return 0;
}

