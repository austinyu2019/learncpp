#include <iostream>
using namespace std;
class A {
public:
    int val;
    A(int n=0){ // 构造函数
        val = n;
    }
    A& GetObj(){
        return *this;

    }

// 在此处补充你的代码
};

int main() {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
}