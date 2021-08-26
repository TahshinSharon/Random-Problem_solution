#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		string s, ans, str;
		cin >> s;
		int l = s.length();
		str = to_string(l - 2);
		if (l > 10) {
			l = l - 2;
			str = to_string(l);
			ans = ans + s[0];
			ans = ans + str;
			ans = ans + s[l + 1];
			cout << ans << "\n";
		}
		else cout << s << "\n";
	}
}