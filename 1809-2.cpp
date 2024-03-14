#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateChatTime(int n, vector<pair<int, int>>& hIntervals, vector<pair<int, int>>& wIntervals) {
    // 对小H和小W的时间段按开始时间排序
    sort(hIntervals.begin(), hIntervals.end());
    sort(wIntervals.begin(), wIntervals.end());

    int chatTime = 0;
    int hIndex = 0;
    int wIndex = 0;

    while (hIndex < n && wIndex < n) {
        int hStart = hIntervals[hIndex].first;
        int hEnd = hIntervals[hIndex].second;
        int wStart = wIntervals[wIndex].first;
        int wEnd = wIntervals[wIndex].second;

        // 寻找两人可以聊天的时间段
        if (hEnd <= wStart) {
            hIndex++;
        } else if (wEnd <= hStart) {
            wIndex++;
        } else {
            int chatStart = max(hStart, wStart);
            int chatEnd = min(hEnd, wEnd);
            chatTime += chatEnd - chatStart;
            if (hEnd < wEnd) {
                hIndex++;
            } else {
                wIndex++;
            }
        }
    }

    return chatTime;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> hIntervals(n);
    vector<pair<int, int>> wIntervals(n);

    // 读取小H和小W的时间段
    for (int i = 0; i < n; i++) {
        cin >> hIntervals[i].first >> hIntervals[i].second;
    }

    for (int i = 0; i < n; i++) {
        cin >> wIntervals[i].first >> wIntervals[i].second;
    }

    cout << calculateChatTime(n, hIntervals, wIntervals) << endl;

    return 0;
}
