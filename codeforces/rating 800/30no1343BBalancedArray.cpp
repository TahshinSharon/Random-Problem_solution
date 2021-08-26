#include<iostream>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int temp;
		temp = n / 2;
		if (n % 4 == 0) {
			cout << "YES" << "\n";
			for (int i = 1; i <= temp; i++) {
				cout << i * 2 << " ";
			}
			for (int j = 1; j < temp; j++) {
				cout << 2 * j - 1 << " ";
			}
			cout << 3 * temp - 1 << "\n";
		}
		else cout << "NO" << "\n";
	}
	return 0;
}