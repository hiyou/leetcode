// 10.1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string str;
	int i;
	cout<<"Please input the name and number(enter Ctrl+Z to end):"<<endl;
	vector< pair<string,int> > pavect;
	while(cin>>str>>i)
	{
		pair<string,int> sipai=make_pair(str,i);  //���ִ����������ٱ��� ��pair<string,int> sipai(str,i); ��pair<string,int> sipai��sipai.first=str; sipai.second=i;
		pavect.push_back(sipai);
	}
	cout<<"end"<<endl;
	for(vector< pair<string,int> >::iterator iter=pavect.begin();iter!=pavect.end();iter++)
	{
		cout<<"name:	"<<iter->first<<"	"<<"age:	"<<iter->second<<endl;
	}
	return 0;
}

