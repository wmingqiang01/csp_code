#include <bits/stdc++.h>
using namespace std;

const int N = 101;
int n, m;
int p[N], t[N];
int earliest[N], latest[N];

int main()
{
    int mark = 1;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> t[j];
    }
    for (int i = 0; i < m; i++)
    {
        if (p[i] == 0)
            earliest[i] = 1;
        else
            earliest[i] = earliest[p[i] + t[p[i]]];
        if (earliest[i] + t[i] - 1 > n)
            mark = 0;
    }
    for (int i = 0; i < m; i++)
    {
        cout << earliest[i] << " ";
    }
    cout << endl;
    if (mark == 1)
    {
        for (int i = m; i >= 1; i--)
        {
            int tmp = 366;
            for (int j = i; j <= m; j++)
            {
                if (p[j] = i)
                    tmp = min(tmp, latest[j]);
            }
            if (tmp = 366)
            {
                latest[i] = n - t[i] + 1;
            }
            else
            {
                latest[i] = tmp - t[i];
            }
        }
        for (int i = 0; i < m; i++)
        {
            cout << latest[i] << " ";
        }
    }
    return 0;
}