// 8.9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string text;;
	vector<string> texts;
	string filename;
	cout<<"�������ļ���:"<<endl;
	cin>>filename;
	ifstream input(filename.c_str());
	if(!input)
	{
		cout<<"���ļ�ʧ��"<<endl;
		return -1;
	}

	while(getline(input,text))
		texts.push_back(text);
	input.close();
	if(input.eof())
		cout<<"�ļ�����"<<endl;
	if(input.bad())
		cout<<"ϵͳ������"<<endl;
	if(input.fail())
		cout<<"��ȡʧ��"<<endl;


	vector<string>::iterator it=texts.begin();
	while(it!=texts.end())
		cout<<*it++<<endl;
	return 0;
}

