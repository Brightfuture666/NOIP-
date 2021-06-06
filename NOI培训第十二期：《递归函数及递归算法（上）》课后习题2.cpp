#include <iostream>

using namespace std;
int n, a[101], win;
inline int function(int b) {
	if (b == n) {
		if (a[b] != win) {
			return 0;
		}
		return b;
	}
	function(b + 1);
	if (a[b] == win) {
		return b;
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> win;
	cout << function(1);
	return 0;
}
