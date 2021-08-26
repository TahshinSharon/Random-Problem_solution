#include<iostream>
using namespace std;
int main() {
	int n, p, q, dif, ans = 0;
	cin >> n;
	while (n--) {
		cin >> p >> q;
		dif = q - p;
		if (dif >= 2) {
			ans++;
		}
	}
	cout << ans << "\n";
}