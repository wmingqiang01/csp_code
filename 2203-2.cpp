#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<pair<int, int>> plan;
int t, c;

int check(vector<pair<int, int>> &vec, int k, int q)
{
    int n = vec.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (q + k <= vec[i].first && q + k + vec[i].second - 1 >= vec[i].first)
            count++;
    }
    return count;
}

int main()
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> c;
        plan.push_back(make_pair(t, c));
    }
    int count;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        cout << check(plan, k, q) << endl;
    }
    return 0;
}