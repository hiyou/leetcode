// shuzu_zhizhen.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	/*   �����д������Ϊmum�Ǳ�����������Ϊ����ĳ���
	int num=10;
	int a[num];
	*/
	/*
	int strs[10];  //�����ڲ��Զ���ʼ����ֵ��һ��
	for(int i=0;i!=10;i++)
	cout<<strs[i]<<endl;
	*/

	//��һ��vector ���Ƹ���һ��vector

	/*vector<int> vec1(10,2);
	vector<int> vec2;
	for(vector<int>::iterator iter1=vec1.begin();iter1!=vec1.end();iter1++)
		{
			vec2.push_back(*iter1);
			cout<<*iter1<<endl;
	}*/

	////��̬�������鲢��Ԫ�ش�vector��Ž�������
	//cout<<"please input nums(ctrl+c end):"<<endl;
	//vector<int>vec;
	//int ivec;
	//while(cin>>ivec)
	//	vec.push_back(ivec);
	//cin.clear();
	//int len=vec.size();
	//cout<<"total "<<len<<"nums"<<endl;
	//int *nums=new int[len];
	//int *pnum=nums;
	//for(vector<int>::iterator iter=vec.begin();iter!=vec.end();iter++,pnum++)
	//{
	//	cout<<*iter<<endl;
	//	*pnum=*iter;
	//	cout<<*pnum<<endl;
	//}
	//cout<<"the nums in nums is:  "<<endl;
	//for(int i=0;i!=len;i++)
	//	cout<<nums[i]+"\t"<<endl;
	//cout<<"ends"<<endl;
	//delete [] nums;

	//4.31

	string str;
	cout<<"please input a string: "<<endl;
	cin>>str;
	int len=str.size();
	char *result=new char[len+1];
	strncpy(result,str.c_str(),strlen(str.c_str()));
	
	result[len]='\0';
	for(int i=0;result[i]!='\0';i++)
		cout<<result[i];
	return 0;
}

