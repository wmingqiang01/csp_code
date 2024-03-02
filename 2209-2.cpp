#include <bits/stdc++.h>
using namespace std;
int n, x;
const int N = 35;


int sum(vector<int> &vec, int pre, int rear)
{
    int ans;
    for (int i = pre; i <= rear; i++)
        ans += vec[i];
    return ans;
}

int main()
{
    cin >> n >> x;
    int aa;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> aa;
        a.push_back(aa);
    }
    sort(a.begin(), a.end());
    int price;
    int min_price = INT_MAX;
    int p = 0;
    int q = n - 1;
    while (p <= q)
    {
        price = sum(a, p, q);
        if (price > x)
        {
            q--;
            min_price = min(price, min_price);
        }
        else if (price < x)
        {
            p++;
        }
        else
            cout << x << endl;
    }
    cout << min_price << endl;
    return 0;
}