#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string code;
    getline(cin, code);
    int num = 1;
    int x;
    for (string::iterator it = code.begin(); it != code.end() - 1; it++)
    {
        if (*it != '-')
        {
            x = *it - '0';
            n += (x * num);
            num++;
        }
    }
    string::iterator it1 = code.end() - 1;
    int recog = *it1-'0';
    if (n % 11 == recog)
    {
        cout << "Right";
    }
    else
    {
        *it1 = (num % 11)+'0';
        for (string::iterator it = code.begin(); it != code.end(); it++)
        {
            cout << *it;
        }
    }
    return 0;
}