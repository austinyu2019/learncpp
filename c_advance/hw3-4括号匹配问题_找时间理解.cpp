

#include <iostream>
#include <cstring>
using namespace std;

int match(char str[], int start, bool *matched)
{
    if (strlen(str) == start)
    {
        return -1; 
    }
    else
    {
        if (str[start] == '(')
        {
            int n = match(str, start + 1, matched);
            if (str[n] == ')')
            {
                matched[start] = true;
                matched[n] = true;
                return match(str, n + 1, matched);
            }
            else
            {
                return n;
            }
        }
        else if (str[start] == ')')
        {
            return start;
        }
        else
        {
            return match(str, start + 1, matched);
        }
    }
}

int main()
{
    char str[100];

    while (cin.getline(str, 101))
    {
        bool matched[101] = { 0 };
        int n = match(str, 0, matched);
        while (n != -1)
        {
            n = match(str, n + 1, matched);
        }
        cout << str << endl;
        for (int i = 0; str[i] != '\0'; i++)
        {
            char output = ' ';
            if (!matched[i])
            {
                switch (str[i])
                {
                    case '(':
                        output = '$';
                        break;
                    case ')':
                        output = '?';
                        break;
                }
            }
            cout << output;
        }
        cout << endl;
    }
    return 0;
}