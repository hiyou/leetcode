#include <iostream>

using namespace std;

class Solution {
public:

	//ʱ�临�Ӷ�O��log n) �ռ临�Ӷ�O(1)
	//��mid�������Ϊ�����֣����������зֱ��ҳ�����Ĳ���
	
	int search(int A[], int n, int target)
	{
		if (n <= 0 || A == nullptr)
			return -1;

		int first = 0, last = n - 1;
		int mid;
		while (first <= last)
		{
			mid = first + (last - first) / 2;
			if (A[mid] == target)
				return mid;
			if (A[mid] > A[last])  //A[first...mid]����
			{
				if (A[first] <= target&&target < A[mid])
					last = mid - 1;
				else
					first = mid + 1;
			}
			else               //A[mid...last]����
			{
				if (A[mid] < target&&target <= A[last])
					first = mid + 1;
				else
					last = mid - 1;
			}

		}
		return -1;
	}
};