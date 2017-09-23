#include <iostream>

using namespace std;

int FirstNotRepeatingChar(char *pString)
{
	if (pString == NULL)
		return '\0';
	const int tablesize = 256;
	unsigned int hashtable[tablesize];
	
	for (int i = 0; i < tablesize; i++)
		hashtable[i] = 0;
	
	char *phastkey = pString;
	while (*phastkey != '\0')
		hashtable[*(phastkey++)]++;
	phastkey = pString;

	//���ַ�����ʼλ�ÿ�ʼ������֤�ǵ�һ�����ظ�
	while (*phastkey != '\0')
	{
		if (hashtable[*phastkey] == 1)
			return phastkey-pString+1;
		phastkey++;
	}
	if (*phastkey == '\0')
		return -1;
}

int main()
{
	char string[10000];
	while (cin >> string)
	{
		cout << FirstNotRepeatingChar(string) << endl;
	}
	
}