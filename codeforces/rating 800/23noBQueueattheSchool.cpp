#include<iostream>
#include<string>
using namespace std;
int main() {
	int n, t;
	string s, ans, temp = {'B', 'G'};
	cin >> n >> t;
	cin >> s;
	ans.assign(s);
	while (t--) {
		for (int i = 0; i < n - 1; i++) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				ans[i] = s[i + 1];
				ans[i + 1] = s[i];
			}
		}
		s.assign(ans);
	}
	cout << ans << "\n";
}