#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int s;
		cin >> s;
		int ans = 0;
		int pw = 1000 * 1000 * 1000;
		while (s > 0) {
			while (s < pw) pw /= 10;
			ans += pw;
			s -= pw - pw / 10;
		}
		cout << ans << endl;
	}

	return 0;
}