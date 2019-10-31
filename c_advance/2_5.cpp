//编程题＃5：细菌实验分组
#include <iostream>
using namespace std;

void sortByRate(int n, int id[], double rate[]);

int main()
{
    int n = 0;
    cin >> n;

    int id[100];
    double rate[100];
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        cin >> id[i] >> x1 >> x2;
        rate[i] = (x2 - x1) / x1;
    }

    sortByRate(n, id, rate); 

    double maxDiff = 0;
    int maxDiffIndex = 0;
    for (int i = 0; i < n - 1; i++)
    {
        double diff = rate[i] - rate[i + 1];
        if (maxDiff < diff)
        {
            maxDiff = diff;
            maxDiffIndex = i;
        }
    }


    cout << maxDiffIndex + 1 << endl;
    for (int i = maxDiffIndex; i >= 0; i--)
    {
        cout << id[i] << endl;
    }


    cout << n - maxDiffIndex - 1 << endl;
    for (int i = n - 1; i > maxDiffIndex; i--)
    {
        cout << id[i] << endl;
    }

    return 0;
}

void sortByRate(int n, int id[], double rate[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (rate[j + 1] > rate[j])
            {
                int tmpId = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tmpId;
                double tmpRate = rate[j];
                rate[j] = rate[j + 1];
                rate[j + 1] = tmpRate;
            }
        }
    }
}