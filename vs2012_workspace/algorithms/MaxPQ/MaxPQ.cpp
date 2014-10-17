#include "MaxPQ.h"

template<typename T> MaxPQ<T>::MaxPQ()
{
	n = 0;
	max = 5;
	data = new T[max];
	data[0] = NULL;
}

template<typename T> bool MaxPQ<T>::isEmpty()
{
	return n == 0;
}

template<typename T> void MaxPQ<T>::Insert(T val)
{
	if (n == max)
		resize(2 * n);
	data[++n] = val;
	swim(n);
}

template<typename T> int MaxPQ<T>::size()
{
	return n;
}


//�ϸ�����ڵ�������
template<typename T> void MaxPQ<T>::swim(int k)
{
	while (k > 1 && data[k] > data[k / 2])
	{
		exch(data[k], data[k / 2]);
		k = k / 2;
	}
}

//�³���С�ڵ�������
template<typename T> void MaxPQ<T>::sink(int k)
{
	while (2 * k <= n)
	{
		int j = 2 * k;
		if ((j + 1 < n) && data[j + 1] > data[j])   //�ҳ������ӽڵ��нϴ�Ľڵ�
			j++;
		if (data[j]<data[k]) break;
		exch(data[k], data[j]);
		k = j;
	}
}

template<typename T> void MaxPQ<T>::exch(T &i, T &j)
{
	T temp = i;
	i = j;
	j = temp;
}

template<typename T> void MaxPQ<T>::resize(int num)
{
	int delnum = max; //Ҫ�ͷŵ��ڴ�
	T *del = data;
	
	max = num;
	T *temp=new T[num];
	for (int i = 0; i <= n; i++)
		temp[i] = data[i];	
	//delete data;       //�ͷ��ڴ�ʧ�� ���������
	data = temp;
	
// 	for (int i = 0; i < delnum; i++)
// 	{
// 		printf("===============\ndelete data:%d\n===============\n", *(del + i));
// 		delete &del[i];
// 	}
	//delete[] del;
}

template<typename T> T MaxPQ<T>::delMax(){
	T val = data[1];
	exch(data[1], data[n--]);
	data[n + 1] = NULL;
	sink(1);
	if (n == max / 4)
		resize(max / 2);
	return val;
}

template<typename T> void MaxPQ<T>::sort()
{
	int temp = n;
	for (int i = n / 2; i >= 1; i--)      //�����
		sink(i);                     
	while (n > 1)
	{
		exch(data[1], data[n--]);
		sink(1);
	}
	n = temp;
}

template<typename T> void MaxPQ<T>::pritfPQ()
{
	for (int i = 1; i <= n; i++)
	{
		if (i == n)
			printf("%d\n", data[i]);
		else
			printf("%d ", data[i]);
	}
}
