// 12.1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>

using namespace std;

class Person
{
private:
	string name,address;
public:
	Person(const string &nm,const string &addr):name(nm), address(addr)
	{
	}
	string GetName() const
	{
		return name;
	}

	string GetAddre() const
	{
		return address;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

