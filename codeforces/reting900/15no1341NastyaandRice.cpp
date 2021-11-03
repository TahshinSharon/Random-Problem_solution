#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b, c, d, a1, b1, c1, d1;
		scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
		a1 = (a - b) * n;
		b1 = (a + b) * n;
		c1 = (c - d);
		d1 = (c + d);
		if (b1 < c1 || d1 < a1) {
			cout << "NO" << "\n";
		}
		else cout << "YES" << "\n";
	}
	return 0;
}