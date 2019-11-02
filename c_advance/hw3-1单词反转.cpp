#include <iostream>
using namespace std;

void revertWord(char str[], int start, int end);
void revert(char str[], int start);

int main()
{
    char str[500];
    cin.getline(str, 500);
    revert(str, 0);
    cout << str << endl;
    return 0;

}

void revertWord(char str[], int start, int end)
{
    for (int i = start, j = end; i < j; i++, j--)
    {
        char tmp = str[i]; //原地换 直接开头和结尾相同距离的换
        str[i] = str[j];
        str[j] = tmp;
    }
}

void revert(char str[], int start)
{
    while (str[start] == ' ') //跳过空格
    {
        start++;
    }
    if (str[start] == '\0') //结束
    {
        return;
    }
    int end = start; //确定一个单词的开头结尾
    while (str[end] != ' ' && str[end] != '\0')
    {
        end++;
    }
    revertWord(str, start, end - 1); //倒转
    revert(str, end); // 继续
}
