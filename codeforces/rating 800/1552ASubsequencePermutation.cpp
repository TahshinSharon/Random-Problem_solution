#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		string s1, s2;
		int ans = 0;
		cin >> n;
		cin >> s1;
		s2 = s1;
		sort(s2.begin(), s2.end());
		for (int j = 0; j < n; j++) {
			if (s1[j] == s2[j]) {
				ans = ans;
			}
			else ans++;
		}
		cout << ans << endl;
	}
}