#include <bits/stdc++.h>
using namespace std;
int dx, dy;
int x, y;
int n, m;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		dx += x;
		dy += y;
	}
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		x += dx;
		y += dy;
		cout << x <<" "<< y << endl;
	}
	return 0;
}