#include <stdio.h>

using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int m=0;  //�������һ���������бȽϣ�����һ����С����˵����һ������С��
		int first; //��¼��һ������
		int num=0;
		scanf("%d",&num);
		m=first=num;    
		int i;   //ѭ������
		bool isEnd=false;
		for(i=1;i!=n;i++)
		{
			scanf("%d",&num);
			if((false==isEnd)&&(num<m))
			{
				printf("%d\n",num);
				isEnd=true;
			}		
		}
		if((false==isEnd)&&(i==n))
			printf("%d\n",first);
	}
	return 0;
}