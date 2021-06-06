#include <iostream>

using namespace std;

inline void function(long long a) {
	if (a == 0) {
		return;
	}
	function(a / 8);
	cout << a % 8;
}
int main() {
	long long n;
	cin >> n;
	function(n);
	return 0;
}
