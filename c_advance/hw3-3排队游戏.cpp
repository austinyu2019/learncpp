
#include <iostream>
using namespace std;

char boy;

int match(char str[], int start)
{
    if (str[start] != boy)
    {
        return start;
    }
    else
    {
        int boyIndex = start;
        int girlIndex = match(str, start + 1);
        cout << boyIndex << " " << girlIndex << endl;

        return match(str, girlIndex + 1);
    }
}
int main()
{
    char str[100];
    cin.getline(str, 100);
    boy = str[0];
    match(str, 0);
    return 0;
}
