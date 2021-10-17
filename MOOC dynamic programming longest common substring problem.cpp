#include <iostream>

using namespace std;

int main() {
	int n, m, f[205][205] = {0}, ans = 0, cnt = 0, l = 0, l_max = 0;
	char a[205] = {'0'}, b[205] = {'0'};
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i] != b[j]) {
				f[i][j] = 0;
			} else {
				f[i][j] = f[i - 1][j - 1] + 1; ans = max(ans, f[i][j]);
				if (f[i][j] >= ans) {
					cnt = i;
				}
				if (f[i][j] > l_max)  {
					l_max = f[i][j];
				}
			}
		}
	}
	cout << ans << endl;
	char Ans[205] = {'0'}; int k = 0;
	while (l_max)  {
		Ans[++k] = a[cnt];
		cnt--; l_max--;
	}
	for (int i = 1; i <= k; i++) {
		cout << Ans[i] << " ";
	}
	return 0;
}
