#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int num = 0, lineLength = 0;
	cin >> num;
	char word[40];
	for (int i = 0; i < num; i++)
	{
		cin >> word;
		if (lineLength + strlen(word) + 1> 80)
		{
			cout << endl;
			lineLength = 0;
		}
		else if (lineLength > 0)
		{
			cout << " ";
			lineLength++;
		}
		cout << word;
		lineLength += strlen(word);
	}

	return 0;
}
