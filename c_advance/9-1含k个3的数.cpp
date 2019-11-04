
#include <iostream>
using namespace std;

bool k3(int m, int k);

int main()
{
    int m,k;
    cin >> m >> k;
    if (m%19 == 0 && k3(m,k)){
        cout<< "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}


bool k3 (int m, int k){
    int a[6] ={0};
    for (int i=0 ; m>0 ; i++) //获得所有数字
    {
        a[i] = m%10;
        m /= 10;
    }

    int num = 0;
    for (int i=0 ; i<6 ;i++)
    {
        if (a[i] ==3)
        {
            num++;
        }
    }

    if(num == k)
    {
        return true;
    }
    return false;

}
