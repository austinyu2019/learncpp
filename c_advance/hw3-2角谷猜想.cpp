
#include <iostream>
using namespace std;

void jiaogu(int n);

int main()
{
    int n = 0;
    cin >> n;
    jiaogu(n);
    return 0;
}

void jiaogu(int n)
{
    if (n == 1)
    {
        cout << "End" << endl;
        return;
    }
    if (n % 2 == 1)
    {
        cout << n << "*3+1=" << 3 * n + 1 << endl;
        jiaogu(3 * n + 1);
    }
    else
    {
        cout << n << "/2=" << n / 2 << endl;
        jiaogu(n / 2);
    }
}
