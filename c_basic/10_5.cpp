#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N = 0;
	int CT[100][100];
	int numOfExceptions = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> CT[i][j];
		}
	}

	for (int i = 1; i < N - 1; i++)
	{
		for (int j = 1; j < N - 1; j++)
		{
			int val = CT[i][j];
			if ((CT[i - 1][j] - val) >= 50 && (CT[i][j - 1] - val) >= 50 && (CT[i][j + 1] >= 50) && (CT[i + 1][j] >= 50))
			{
				numOfExceptions++;
			}
		}
	}
	cout << numOfExceptions << endl;
	return 0;
}