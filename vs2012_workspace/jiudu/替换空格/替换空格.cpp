// �滻�ո�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>



int _tmain(int argc, _TCHAR* argv[])
{
	char s;
	while (scanf("%c", &s) !=EOF)
	{
		if (s == ' ')
			printf("%s","%20");
		else
			printf("%c", s);
	}

	return 0;
}

