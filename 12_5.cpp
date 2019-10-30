#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[11];
	char substr[4];
	char newstr[14];

	while (cin >> str >> substr)
	{
		int len = strlen(str);
		int maxIndex = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] > str[maxIndex])
			{
				maxIndex = i;
			}
		}

		for (int i = 0; i <= maxIndex; i++)
		{
			newstr[i] = str[i];
		}
		for (int i = maxIndex + 1, j = 0; substr[j] != '\0'; i++, j++)
		{
			newstr[i] = substr[j];
		}
		for (int i = maxIndex + 1; i < strlen(str) + 1; i++)
		{
			newstr[i + 3] = str[i];
		}

		cout << newstr << endl;
	}
	return 0;
}
