// 13.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
using namespace std;

struct NoName{
	NoName():pstring(new string) ,i(0),d(0)
	{
	}

	NoName(const NoName & nn): i(nn.i),d(nn.d),pstring(new string(*nn.pstring))
	{

	}
private:
	string *pstring;
	int i;
	double d;
};


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

