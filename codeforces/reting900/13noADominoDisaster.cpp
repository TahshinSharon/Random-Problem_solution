#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s, ans;
		cin >> n;
		cin >> s;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'U') {
				s[i] = 'D';
			}
			else if (s[i] == 'D') {
				s[i] = 'U';
			}
		}
		cout << s << "\n";
	}
	return 0;
}