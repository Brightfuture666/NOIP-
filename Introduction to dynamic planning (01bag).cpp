#include <iostream>

using namespace std;
struct node{
	int v;
	int p;
}a[205];

int main() {
	int n, f[205][205] = {0}, c;
	bool rec[205][205] = {0};
	cin >> n >> c;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].v >> a[i].p;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = a[i].v; j <= c; j++) {
			f[i][j] = max(f[i - 1][j - a[i].v] + a[i].p, f[i - 1][j]);
			if (f[i - 1][j - a[i].v] + a[i].p > f[i - 1][j]) {
				rec[i][j] = 1;
			}
		}
	}
	cout << f[n][c] << endl;
	int y = c;
	for (int i = n; i >= 1; i--) {
		if (rec[i][y] == 1) {
			cout << i << " ";
		}
		y -= a[i].v;
	}
	return 0;
}
