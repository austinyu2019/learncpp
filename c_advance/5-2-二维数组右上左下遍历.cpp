#include <iostream>
using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;
	int a[100][100];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}


	for (int i = 0; i < col; i++) // 总和
	{
		for (int j = 0, k = i; j < row && k >= 0; j++, k--)
		{
			cout << a[j][k] << endl;
		}
	}
	for (int i = 1; i < row; i++)
	{
		for (int j = i, k = col - 1; j < row && k >= 0; j++, k--)
		{
			cout << a[j][k] << endl;
		}
	}
	return 0;
}