// 流感传染
#include <iostream>
using namespace std;

void update(int n, char a[100][100]);

int main()
{
    int n = 0;
    cin >> n;
    char a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int m = 0; //第几天之后
    cin >> m;
    for (int i = 0; i < m - 1; i++)
    {
        update(n, a);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '@')
            {
                sum++;
            }
        }
    }

    cout << sum << endl;
    return 0;
}

void update(int n, char a[100][100])
{
    char newA[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            newA[i][j] = a[i][j];
            if (a[i][j] == '.')
            {
                if ((a[i][j - 1] == '@' && j - 1 >= 0) ||
                    (a[i][j + 1] == '@' && j + 1 < n) ||
                    (a[i - 1][j] == '@' && i - 1 >= 0) ||
                    (a[i + 1][j] == '@' && i + 1 < n))
                {
                    newA[i][j] = '@';
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = newA[i][j];
        }
    }
}