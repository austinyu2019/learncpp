#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < m; i++)
	{
		int temp = a[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			a[j] = a[j - 1];
		}
		a[0] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
	return 0;
}