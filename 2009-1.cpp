#include <bits/stdc++.h>
using namespace std;
int n;
double X, Y;
double min_distance = numeric_limits<double>::max();
double x, y;
bool cmp(pair<double, int> a, pair<double, int> b) { return a.first < b.first; }
vector<pair<double, int>> distances;
int main()
{
    cin >> n >> X >> Y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        double distanse = pow((x - X), 2) + pow((y - Y), 2);
        pair<double, int> tmp = make_pair(distanse, i + 1);
        distances.push_back(tmp);
    }
    stable_sort(distances.begin(),distances.end(),cmp);
    cout<<distances[0].second<<endl<<distances[1].second<<endl<<distances[2].second<<endl;
    return 0;
}