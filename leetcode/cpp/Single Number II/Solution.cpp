#include <iostream>
using namespace std;

class Solution {
public:

	//ʱ�临�Ӷ�O��n) �ռ临�Ӷ�O��1��
	//��һ�������¼һ��int��32λ�������������������Σ���3ȡ��һ����0������������ǳ���һ�ε��Ǹ���
	int singleNumber(int A[], int n) {
		const int num = sizeof(int)* 8;
		int bitnum[num];
		fill(bitnum, bitnum + num, 0);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < num; j++)
			{
				bitnum[j] += (A[i] >> j) & 1;
				bitnum[j] %= 3;
			}
		}

		int res=0;
		for (int i = 0; i < num; i++)
			res += (bitnum[i] << i);
		return res;
	}
};