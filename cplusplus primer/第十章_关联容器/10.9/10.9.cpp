// 10.9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string word;
	map<string,int> simap;
	while(cin>>word)
		simap[word]++;
	for(map<string,int>::iterator iter=simap.begin();iter!=simap.end();iter++)
		cout<<"word:	"<<iter->first<<"	"<<"times:	"<<iter->second<<endl;
	return 0;
}

