
#include <iostream>
using namespace std;

int main()
{
    int m = 0, n = 0;
    cin >> m >> n;

    int altitude[22][22] = { 0 };
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> altitude[i][j];
        }
    }

    int(*p)[22] = altitude;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (p[i][j] >= p[i][j - 1] && p[i][j] >= p[i][j + 1]
                && p[i][j] >= p[i - 1][j] && p[i][j] >= p[i + 1][j])
            {
                cout << i - 1 << ' ' << j - 1 << endl;
            }
        }
    }
    return 0;
}
