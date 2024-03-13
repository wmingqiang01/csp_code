#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) // If frequencies are equal, sort by keys
        return a.first < b.first;
    else // Sort by frequencies
        return a.second > b.second;
}

int main() {
    int n;
    cin >> n;
    map<int, int> num;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        num[x]++;
    }
    vector<pair<int, int>> vec(num.begin(), num.end());
    stable_sort(vec.begin(), vec.end(), cmp);
    for (const auto& p : vec) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
