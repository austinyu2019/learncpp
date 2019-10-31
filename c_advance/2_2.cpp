//  四大湖

#include <iostream>
using namespace std;

int check(int guess[], int order[]);


int main()
{
    // 鄱阳湖 洞庭湖 太湖 洪泽湖
    int guessA[4] = { 3,1,0,4 };
    int guessB[4] = { 2,4,3,1 };
    int guessC[4] = { 0,3,0,4 };
    int guessD[4] = { 1,3,4,2 };

    for (int i = 1; i <= 4; i++) //第一个人
    {
        for (int j = 1; j <= 4; j++) //第二个人
        {
            if (j == i) // 不要去判断同一个湖
            {
                continue;
            }
            for (int k = 1; k <= 4; k++) //第三个人
            {
                if (k == i || k == j) //不要去判断同一个湖
                {
                    continue;
                }
                for (int l = 1; l <= 4; l++)
                {
                    if (l == i || l == j || l == k) //不要去判断同一个湖
                    {
                        continue;
                    }
                    int order[4] = { i, j, k, l }; //正确答案
                    if (check(guessA, order) == 1 && check(guessB, order) == 1 && check(guessC, order) == 1 && check(guessD, order) == 1) //每人只猜中一个
                    {
                        for (int m = 0; m < 4; m++)
                        {
                            cout << order[m] << endl;
                        }
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}

int check(int guess[], int order[])
{
    int result = 0;
    for (int i = 0; i < 4; i++)
    {
        if (order[i] == guess[i])
        {
            result++;
        }
    }
    return result;
}