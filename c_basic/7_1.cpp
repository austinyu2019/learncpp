
//编程题＃1：年龄与疾病

#include<iostream>
#include <iomanip>
using namespace std;


int main() {
    int n, age, a[4] = {0};
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> age;
        if (age <=18) a[0] ++;
        else if (age < 36) a[1]++;
        else if (age < 61) a[2]++;
        else a[3]++;
    }
    for (int i=0; i<4 ; i++){
        cout<< fixed << setprecision(2)<< (double)a[i]/n *100 << "%" <<endl;
    }



    return 0;
}
