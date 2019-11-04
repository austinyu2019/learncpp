#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m = 0; //个数
    float a = 0; //最低严重值
    cin >> m >> a;

    int id[50];
    float acuity[50];
    int num = 0;
    for (int i = 0; i < m; i++)
    {
        int tmpId;
        float tmpAcuity;
        cin >> tmpId >> tmpAcuity;
        if (tmpAcuity > a)
        {
            id[num] = tmpId;
            acuity[num] = tmpAcuity;
            num++;
        }
    }
    if (num == 0)
    {
        cout << "None." << endl;
        return 0;
    }
    else   //排序
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 1; j < num; j++)
            {
                if (acuity[j] > acuity[j - 1])
                {
                    float tmp1 = acuity[j];
                    acuity[j] = acuity[j - 1];
                    acuity[j - 1] = tmp1;
                    int tmp2 = id[j];
                    id[j] = id[j - 1];
                    id[j - 1] = tmp2;
                }
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        cout << setw(3) << setfill('0') << id[i] << ' ';
        cout << fixed << setprecision(1) << acuity[i] << endl;
    }
    return 0;
}