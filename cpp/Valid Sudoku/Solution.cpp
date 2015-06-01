#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	//�ֱ����С��С����ж��Ƿ��ظ�����Ԫ��
	bool IsValidSudoku(vector< vector<char> > &board)
	{
		//ʱ�临�Ӷ�O(n^2)
		//�ռ临�Ӷ�O��1��

		bool used[9];
		for (int i = 0; i < 9; i++)
		{
			fill(used, used + 9, false);
			//�����
			for (int j = 0; j < 9; j++)
			{
				if (!check(board[i][j], used))
					return false;
			}
			
			//�����
			fill(used, used + 9, false);
			for (int j = 0; j < 9; j++)
			{
				if (!check(board[j][i], used))
					return false;
			}
		}

		//����

		for (int r = 0; r < 3;r++)
			for (int c = 0; c < 3; c++)
			{
				fill(used, used + 9, false);
				for (int i = r*3; i < r*3+3;i++)
					for (int j = c * 3; j < c * 3 + 3; j++)
						if (!check(board[i][j], used))
							return false;
			}

			return true;
	}
	
private:

	//�ж���������Ƿ��Ѿ����֣��������򷵻�false��û�г����򷵻�true�Ұ����λ���������Ѿ����ֵı��
	//board�д�ŵ����Ǵ�1��ʼ�ģ�used�������Ǵ�0��ʼ
	bool check(char ch, bool used[9])
	{
		if (ch == '.')
			return true;
		else if (used[ch - '1'])
			return false;
		else
			return used[ch - '1'] = true;
	}
};