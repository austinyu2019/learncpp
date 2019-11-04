#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Complex {
private:
    double r,i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    Complex&operator=(char *s){
        char *tmpstr = new char[strlen(s)];
        stpcpy(tmpstr, s);
        char*temp = strtok(tmpstr, "+"); //分割字符串
        r = atof(temp); //字符串换成浮点数
        temp = strtok(NULL, "i");
        i = atof(temp);   
        return *this;

    }

// 在此处补充你的代码
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}

//#include <iostream>
//#include <string.h>
//int main(){
//    char s[] = "ab-cd : ef;gh :i-jkl;mnop;qrs-tu: vwx-y;z";
//    char *delim = "-: ";
//    char *p;
//    printf("%s ", strtok(s, delim));
//    while((p = strtok(NULL, delim)))
//        printf("%s ", p);
//    printf("\n");
//    return 0;
//}