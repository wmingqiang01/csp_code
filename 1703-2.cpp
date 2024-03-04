#include <bits/stdc++.h>
using namespace std;

int n, m;
int p, q;

list<int> l;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        l.push_back(i);
    for (int i = 0; i < m; i++)
    {
        cin >> p >> q;
        list<int>::iterator it1 = find(l.begin(), l.end(), p);
        list<int>::iterator it2 = it1;
        if (q > 0)
        { 
            for (int i = 0; i <= q; i++)
                it2++;
        }
        else
            for (int i = 1; i <= -q; i++)
                it2--;
        l.insert(it2, p);
        l.erase(it1);
    }
    for (list<int>::iterator iter = l.begin(); iter != l.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
