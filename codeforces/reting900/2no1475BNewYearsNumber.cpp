#include<iostream>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		while (1) {
			if (n < 2020) {
				cout << "NO" << "\n";
				break;
			}
			if (n % 2020 == 0 || n % 2021 == 0) {
				cout << "YES" << "\n";
				break;
			}
			else n = n - 2020;
		}
	}
	return 0;
}