#include <iostream>

using namespace std;
int n, x, y;
struct node{
	long long a;
	long long b;
	long long g;
	long long k;
}m[10001];
inline int work(int l, int r) {
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (l >= m[i].a && l <= (m[i].a + m[i].g) && r >= m[i].b && r <= (m[i].b + m[i].k)) {
			ans = i;
		}
	}
	if (ans == 0) {
		return -1;
	} else {
		return ans;
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m[i].a >> m[i].b >> m[i].g >> m[i].k;
	}
	cin >> x >> y;
	cout << work(x, y);
	return 0;
}
