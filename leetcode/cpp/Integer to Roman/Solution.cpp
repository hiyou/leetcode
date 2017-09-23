#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		//ʱ�临�Ӷ� O(num) ���ռ临�Ӷ� O(1)
		const int radix[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
		const string symbol[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
		string roman;
		for (size_t i = 0; num > 0; i++){
			int count = num / radix[i];
			num %= radix[i];
			for (; count > 0; count--)
				roman += symbol[i];
		}
		return roman;
	}
};


int main()
{
	Solution solu;
	cout << solu.intToRoman(6) << endl;
	int end;
	cin >> end;
}