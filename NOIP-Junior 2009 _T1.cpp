#include <iostream> 

using namespace std;

int main() {
	int n, a[105];
	cin >> n;
	int k = n + 1;
	for (int i = 1; i <= n + 1; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n + 1; i++) {
		k--;
		if (a[i] > 0) {
			if (a[i] == 1) {
				if (i == 1) {
					cout << "x^" << k;
				} else {
					if (k == 0) {
						cout << "+1";
					} else if (k == 1) {
						cout << "+x";
					} else {
						cout << "+" << "x^" << k;
					}
				}
			} else {
				if (i == 1) {
					cout << a[i] << "x^" << k;
				} else {
					if (k == 0) {
						cout << "+" << a[i];
					} else if (k == 1) {
						cout << "+" << a[i] << "x";
					} else {
						cout << "+" << a[i] << "x^" << k;
					}
				}
			}
		} else if (a[i] < 0) {
			if (a[i] == -1) {
				if (k == 0) {
					cout << "-1";
				} else if (k == 1) {
					cout << "-x";
				} else {
					cout << "-x^" << k;
				}
			} else {
				if (k == 0) {
					cout << a[i];
				} else if (k == 1) {
					cout << a[i] << "x";
				} else {
					cout << a[i] << "x^" << k;
				}
			}
		}
	}
	return 0;
}
