// 9.14.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
#include <iterator>
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string s1;
	vector<string> svec;
	while(cin>>s1)
		svec.push_back(s1);
	vector<string>::iterator it1=svec.begin();
	vector<string>::iterator it2=svec.end();
	while(it1!=it2)
	{
		cout<<*it1<<"	";
		it1++;
	}
	return 0;
}

