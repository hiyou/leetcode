#include <cstdio>

int main()
{
	int num;  //����ĸ���
	int m;   //ָ��
	double base, result;	//��

	scanf_s("%d", &num);
	while (num--)
	{
		scanf_s("%lf %d", &base, &m);
		if (base == 0 && m <= 0)
			printf("INF\n");
		else if (m == 0)
		{
			result = 1;
			printf("%.2ef\n", result);
		}
		else if (m > 0)
		{
			result = 1;
			for (int i = 0; i < m; i++)
				result *= base;
			printf("%.2ef\n", result);
		}
		else if (m<0)
		{
			result = 1;
			m = 0 - m;
			for (int i = 0; i < m; i++)
				result *= base;
			result = 1 / result;
			printf("%.2ef\n", result);
		}
	}
	scanf_s("%d", &m);
}