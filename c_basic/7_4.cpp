/*人民币支付 从键盘输入一指定金额（以元为单位，如345），
 * 然后输出支付该金额的各种面额的人民币数量，
 * 显示100元，50元，20元，10元，5元，1元各多少张，
 * 要求尽量使用大面额的钞票。
*/

#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, d, e, f;
    cin >> n;
    a = n / 100;
    b = n % 100 / 50;
    c = n % 50 / 20;
    d = n % 50 % 20 / 10;
    e = n % 50 % 10 / 5;
    f = n % 5;
    cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl;
    return 0;

}