#include <bits/stdc++.h>
using namespace std;
int n;

int main()
{ 
    int score[5] = {0};
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        vector<pair<int, int>>::iterator s = find(v.begin(), v.end(), make_pair(v[i].first - 1, v[i].second));
        if (s != v.end())
        {
            c++;
        }
        s = find(v.begin(), v.end(), make_pair(v[i].first, v[i].second - 1));
        if (s != v.end())
        {
            c++;
        }
        s = find(v.begin(), v.end(), make_pair(v[i].first + 1, v[i].second));
        if (s != v.end())
        {
            c++;
        }
        s = find(v.begin(), v.end(), make_pair(v[i].first, v[i].second + 1));
        if (s != v.end())
        {
            c++;
        }
        if (c == 4)
        {
            int core=0;
            s = find(v.begin(), v.end(), make_pair(v[i].first-1, v[i].second - 1));
            if (s != v.end())
            {
                core++;
            }
            s = find(v.begin(), v.end(), make_pair(v[i].first + 1, v[i].second-1));
            if (s != v.end())
            {
                core++;
            }
            s = find(v.begin(), v.end(), make_pair(v[i].first-1, v[i].second + 1));
            if (s != v.end())
            {
                core++;
            }
            s = find(v.begin(), v.end(), make_pair(v[i].first+1, v[i].second + 1));
            if (s != v.end())
            {
                core++;
            }
            score[core]++;
        }
    }
    for (int i = 0; i < 5; i++)
        cout << score[i] << endl;
    return 0;
}