// 发票统计
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float bill[3][3] = { 0 };

    for (int i = 0; i < 3; i++)
    {
        int id, n;
        cin >> id >> n;
        for (int j = 0; j < n; j++)
        {
            char type;
            float money;
            cin >> type >> money;
            switch (type)
            {
                case 'A':
                    bill[id - 1][0] += money;
                    break;
                case 'B':
                    bill[id - 1][1] += money;
                    break;
                case 'C':
                    bill[id - 1][2] += money;
                    break;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ' ' << fixed << setprecision(2) << bill[i][0] + bill[i][1] + bill[i][2] << endl;
    }

    char type[] = { 'A', 'B', 'C' };
    for (int i = 0; i < 3; i++)
    {
        cout << type[i] << ' ' << fixed << setprecision(2) << bill[0][i] + bill[1][i] + bill[2][i] << endl;
    }
    return 0;
}