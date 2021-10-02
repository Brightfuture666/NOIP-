#include <iostream>

using namespace std;

int main() {
	int n, a[205], f[205] = {0}, Rec[205] = {0};
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	f[n] = a[n]; Rec[n] = n;
	for (int i = n - 1; i >= 1; i--) {
		if (f[i + 1] > 0) {
			f[i] = f[i + 1] + a[i]; Rec[i] = max(Rec[i + 1], i);
		} else {
			f[i] = a[i]; Rec[i] = i;
		}
	}
	int ans = 0, loc = 0;
	for (int i = 1; i <= n; i++) {
		if (f[i] > ans) {
			loc = i;
		}
		ans = max(f[i], ans);
	}
	cout << ans << " " << loc << " " << Rec[loc];
	return 0;
}
