#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, double>> opt;
double tmp;
int  flag;

int main() {
	cin >> n >> m;
	pair<int,double> op=make_pair(0,0);
	opt.push_back(op);
	for (int p = 0; p < n; p++) {
		cin >> flag >> tmp;
		op=make_pair(flag, tmp);
		opt.push_back(op);
	}
	for (int p = 1; p <= m; p++) {
		int i,j;
		double x,y;
		cin >> i >> j >> x >> y;
		if (i!=j&&i != 0) {
			if (opt[i].first == 1) {
				x *= opt[i].second;
				y *= opt[i].second;
			} else if (opt[i].first == 2) {
				x = x * cos(opt[i].second) + y * sin(opt[i].second);
				y = x * sin(opt[i].second) - y * cos(opt[i].second);
			}
		}
		if (i!=j&&j != 0) {
			if (opt[j].first == 1) {
				x *= opt[j].second;
				y *= opt[j].second;
			} else if (opt[j].first == 2) {
				x = x * cos(opt[j].second) - y * sin(opt[j].second);
				y = x * sin(opt[j].second) + y * cos(opt[j].second);
			}
		}
		if(i==j){
			if (opt[j].first == 1) {
				x *= opt[j].second;
				y *= opt[j].second;
			} else if (opt[j].first == 2) {
				x = x * cos(opt[j].second) - y * sin(opt[j].second);
				y = x * sin(opt[j].second) + y * cos(opt[j].second);
			}
		}
		cout << x << " " << y << endl;
	}
	return 0;
}