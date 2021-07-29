#include <iostream>
#include <string> 
using namespace std;

int main() {
	char tmp[62501] = {0};
	int cnt;
	for (cnt = 1; tmp[cnt - 1] != 'E'; cnt++) {
		cin >> tmp[cnt];
	}
	if (tmp[1] == 'E') {
		cout << "0:0" << endl;
		cout << endl;
		cout << "0:0";
		return 0;
	} else {
		tmp[cnt] = 0; tmp[cnt - 1] = 0;
		cnt = cnt - 2;
	}
	int a = 0, b = 0, k = 1;
	while (k <= cnt) {
		while (max(a, b) != 11) {
			if (k > cnt) {
				break;
			}
			if (tmp[k] == 'W') {
				a++;
				k++;
			} else {
				b++;
				k++;
			}
		}
		if (max(a,b) - min(a, b) >= 2) {
			cout << a << ":" << b << endl;
			if (max(a, b) >= 11 && k >= cnt) {
				cout << "0:0" << endl;
			}
			a = 0; b = 0;
		} else {
			while (max(a,b) - min(a, b) < 2) {
				if (k > cnt) {
					break;
				}
				if (tmp[k] == 'W') {
					a++;
					k++;
				} else {
					b++;
					k++;
				}	
			}
			cout << a << ":" << b << endl;
			a = 0; b = 0;
		}
	}
	cout << endl;
	a = 0; b = 0; k = 1;
	while (k <= cnt) {
		while (max(a, b) != 21) {
			if (k > cnt) {
				break;
			}
			if (tmp[k] == 'W') {
				a++;
				k++;
			} else {
				b++;
				k++;
			}
		}
		if (max(a, b) - min(a, b) >= 2) {
			cout << a << ":" << b << endl;
			if (max(a, b) >= 21 && k >= cnt) {
				cout << "0:0" << endl;
			}
			a = 0; b = 0;
		} else {
			while (max(a, b) - min(a, b) < 2) {
				if (k > cnt) {
					break;
				}
				if (tmp[k] == 'W') {
					a++;
					k++;
				} else {
					b++;
					k++;
				}
			}
			cout << a << ":" << b << endl;
			a = 0; b = 0;
		}
	}
	return 0;
}
