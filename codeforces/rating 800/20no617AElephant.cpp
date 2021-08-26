#include<iostream>
using namespace std;
int main() {
	int x, rem, ans = 0;
	cin >> x;
	rem = x % 5;
	ans = ans + (x / 5);
	if (rem != 0) {
		x = x % 5;
	}
	else if (rem == 0) {
		cout << ans << "\n";
		return 0;
	}
	rem = x % 4;
	ans = ans + (x / 4);
	if (rem != 0) {
		x = x % 4;
	}
	else if (rem == 0) {
		cout << ans << "\n";
		return 0;
	}
	rem = x % 3;
	ans = ans + (x / 3);
	if (rem != 0) {
		x = x % 3;
	}
	else if (rem == 0) {
		cout << ans << "\n";
		return 0;
	}
	rem = x % 2;
	ans = ans + (x / 2);
	if (rem != 0) {
		x = x % 2;
	}
	else if (rem == 0) {
		cout << ans << "\n";
		return 0;
	}
	rem = x % 1;
	ans = ans + (x / 1);
	if (rem != 0) {
		x = x % 1;
	}
	else if (rem == 0) {
		cout << ans << "\n";
		return 0;
	}
}