// test_foreach.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> ivec;
	for (int i = 0; i != 10; i++)
		ivec.push_back(i);

	for (auto vec : ivec)
		cout << vec << "    ";
	return 0;
}

