#include <iostream>
using namespace std;
class Solution
{
public:

	//�ֻ�����
	//ʱ�临�Ӷ� O(n) �ռ临�Ӷ�O(1)
	int singleNumber(int A[], int n)
	{
		if (A == NULL || n <= 0)
			return 0;
		int x = 0;
		for (int i = 0; i < n; i++)
		{
			x = x^A[i];
		}
		return x;
	}
};