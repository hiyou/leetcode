#include <stdio.h>


void PrintMartixIncircle(int **a, int columns, int rows,int start)
{
	int endX = columns - start - 1;
	int endY = rows - start - 1;

	//�����Ҵ�ӡ
	for (int i = start; i <= endX; i++)
		printf("%d ", a[start][i]);

	//���ϵ��´�ӡ
	if (endY > start)
	{
		for (int i =start + 1; i <= endY; i++)
			printf("%d ", a[i][endX]);
	}

	//���ҵ���
	if (endY > start&&endX > start)
	{
		for (int i = endX-1; i >= start; i--)
			printf("%d ", a[endY][i]);
	}

	//���µ���

	if (endY-1 > start&&endX > start)
	{
		for (int i = endY-1; i >= start + 1; i--)
			printf("%d ", a[i][start]);
	}
}

void PrintMartixClockwisely(int **a,int columns,int rows)
{
	if (a == NULL&&columns<0 && rows<0)
		return;
	int start = 0;
	while ((columns > start * 2) && (rows > start * 2))
	{
		PrintMartixIncircle(a, columns, rows, start);
		start++;
	}
	printf("\n");
}


int main()
{
	int n, m; //m��n��
	while (scanf_s("%d%d", &m,&n) != EOF)
	{
		int **a = new int*[m];
		for (int i = 0; i < m; i++)
			a[i] = new int[n];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				scanf_s("%d", &a[i][j]);
		}

// 		for (int i = 0; i < m; i++)
// 			{
// 				for (int j = 0; j < n; j++)
// 					printf("%d ", a[i][j]);
// 				printf("\n");
// 			}
		PrintMartixClockwisely(a,n,m);
		for (int i = 0; i < m; i++)
			delete[] a[i];
		delete[] a;
 	}



}