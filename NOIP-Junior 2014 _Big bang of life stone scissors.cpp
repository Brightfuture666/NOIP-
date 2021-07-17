#include <iostream>

using namespace std;
int n, a, b, n_a[205] = {0}, n_b[205] = {0}, Ans_1 = 0, Ans_2 = 0;
inline void work() {
	for (int i = 1; i <= n; i++) {
		switch (n_a[i]) {
			case 0:
				if (n_b[i] == 2 or n_b[i] == 3) {
					Ans_1++;
				} else if (n_b[i] == 0) {
					
				} else {
					Ans_2++;
				}
				break;
			case 1:
				if (n_b[i] == 0 or n_b[i] == 3) {
					Ans_1++;
				} else if (n_b[i] == 1) {
					
				} else {
					Ans_2++;
				}
				break;
			case 2:
				if (n_b[i] == 1 or n_b[i] == 4) {
					Ans_1++;
				} else if (n_b[i] == 2) {
					
				} else {
					Ans_2++;
				}
				break;
			case 3:
				if (n_b[i] == 2 or n_b[i] == 4) {
					Ans_1++;
				} else if (n_b[i] == 3) {
					
				} else {
					Ans_2++;
				}
				break;
			case 4:
				if (n_b[i] == 0 or n_b[i] == 1) {
					Ans_1++;
				} else if (n_b[i] == 4) {
					
				} else {
					Ans_2++;
				}
				break;
		}
	}
}
int main() {
	cin >> n >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> n_a[i];
	}
	for (int i = a + 1; i <= n; i++) {
		n_a[i] = n_a[i - a];
	}
	for (int i = 1; i <= b; i++) {
		cin >> n_b[i];
	}
	for (int i = b + 1; i <= n; i++) {
		n_b[i] = n_b[i - b];
	}
	work();
	cout << Ans_1 << " " << Ans_2;
	return 0;
}
