// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> ivec;
	int i;
	while(cin>>i)
		ivec.push_back(i);
	cout<<"please input the number you want to search:"<<endl;
	cin.clear();
	cin>>i;
	cout<<"the times of " <<i<<"is: "<<count(ivec.begin(),ivec.end(),i); 
	return 0;
}

