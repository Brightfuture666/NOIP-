#include <iostream>
#include <string>
using namespace std;
int n, m, steps[100001];
string str[100001];
bool toward[100001], a[100001];
inline string work() {
	string tmp;
	int cnt = 1;
	for (int i = 1; i <= m; i++) {
		if (a[cnt] == 0) {
			if (toward[i] == 0) {
				if (cnt - steps[i] <= 0) {
					cnt = cnt - steps[i] + n;
				} else {
					cnt = cnt - steps[i];
				}
			} else {
				if (cnt + steps[i] > n) {
					cnt = cnt + steps[i] - n;
				} else {
					cnt = cnt + steps[i];
				}
			}
		} else {
			if (toward[i] == 0) {
				if (cnt + steps[i] > n) {
					cnt = cnt + steps[i] - n;
				} else {
					cnt = cnt + steps[i];
				}
			} else {
				if (cnt - steps[i] <= 0) {
					cnt = cnt - steps[i] + n;
				} else {
					cnt = cnt - steps[i];
				}
			}
		}
	}
	tmp = str[cnt];
	return tmp;
}
int main() {
	cin >> n >> m; 
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> str[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> toward[i] >> steps[i];
	}
	cout << work();
	return 0;
}
