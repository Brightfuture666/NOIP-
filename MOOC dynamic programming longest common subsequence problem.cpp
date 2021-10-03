#include <iostream>

using namespace std;

int main() {
	int n, m, c[205][205] = {0}, q = 1;
	char a[205] = {'0'}, b[205] = {'0'}, Rec[205][205] = {'0'}, d[205] = {'0'};
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i] == b[j]) {
				c[i][j] = c[i - 1][j - 1] + 1;
				Rec[i][j] = 'P';
			} else {
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
				if (c[i - 1][j] >= c[i][j - 1]) {
					Rec[i][j] = 'U';
				} else {
					Rec[i][j] = 'L';
				}
			}
		}
	}
	cout << c[n][m] << endl;
	for (int i = n; i >= 1; i--) {
		if (a[i] == b[m]) {
			d[q] = a[i]; q++;
		}
		if (Rec[i][m] == 'L') {
			m--; i++;
		} else if (Rec[i][m] == 'P') {
			m--;
		}
	}
	for (int i = q - 1; i >= 1; i--) {
		cout << d[i] << " " ;
	}
	return 0;
}
