#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n, ans = 0;
	n = s.length();
	sort(s.begin(), s.end());
	for (int i = 0; i < n; i++) {
		if (s[i] != s[i + 1]) {
			ans++;
		}
	}
	if (ans % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	}
	else cout << "IGNORE HIM!" << endl;
	return 0;
}