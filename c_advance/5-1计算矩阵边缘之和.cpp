#include <iostream>
using namespace std;

int sumOfEdge(int m, int n, int a[100][100])
{
    int sum = 0;
    if (m == 1 && n == 1)
    {

        return a[0][0];
    }
    if (m == 1)
    {
        return a[0][0] + a[0][n - 1];
    }
    if (n == 1)
    {
        return a[0][0] + a[m - 1][0];
    }
    for (int i = 0; i < m; i++)
    {
        if (i == 0 || i == m - 1) // 第一行或者最后一行
        {
            for (int j = 0; j < n; j++)
            {
                sum += a[i][j];
            }
        }
        else
        {
            sum += (a[i][0] + a[i][n - 1]); //第一列或者最后一列
        }
    }
    return sum;
}

int main()
{
    int k = 0;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int m, n;
        cin >> m >> n;
        int a[100][100];
        for (int j = 0; j < m; j++)
        {
            for (int l = 0; l < n; l++)
            {
                cin >> a[j][l];
            }
        }
        int sum = sumOfEdge(m, n, a);
        cout << sum << endl;
    }
}