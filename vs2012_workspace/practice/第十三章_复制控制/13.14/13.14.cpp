// 13.14.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
struct Exmpl
{
	Exmpl()
	{
		cout<<"Exmpl()"<<endl;
		cout<<"������Ĭ�Ϲ��캯��"<<endl;

		
	}

	Exmpl(const Exmpl &)
	{
		cout<<"Exmpl(const Exmol&)"<<endl;
		cout<<"�����˸��ƹ��캯��"<<endl;
	}

	Exmpl & operator =(const Exmpl &rhe)
	{
		cout<<"operator =(const Exmpl &)"<<endl;
		cout<<"�����˸��Ʋ��������غ���"<<endl;
		return *this;
	}

	~Exmpl()
	{
		cout<<"~Exmpl()"<<endl;
		cout<<"��������������"<<endl;
	}
};


void fun1(Exmpl obj)
{
	 
}

void fun2(Exmpl &obj)
{
	 
}

Exmpl fun3()
{
	Exmpl obj;

	return obj;
}
int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"Exmpl eobj;"<<endl;
	Exmpl eobj;
	cout<<"\n\n\n\n";

	cout<<"fun1(eobj);"<<endl;
	fun1(eobj);
	cout<<"\n\n\n\n";

	cout<<"fun2(eobj);"<<endl;
	fun2(eobj);
	cout<<"\n\n\n\n";

	cout<<"eobj=fun3();"<<endl;
	eobj=fun3();
	cout<<"\n\n\n\n";

	cout<<"Exmpl *p=new Exmpl();"<<endl;
	Exmpl *p=new Exmpl();
	cout<<"\n\n\n\n";


	cout<<"vector<Exmpl> evec(3);"<<endl;
	vector<Exmpl> evec(3);
	cout<<"\n\n\n\n";

	cout<<"delete p;"<<endl;
	delete p;
	cout<<"\n\n\n\n";


	cout<<"return"<<endl;
	return 0;


}

