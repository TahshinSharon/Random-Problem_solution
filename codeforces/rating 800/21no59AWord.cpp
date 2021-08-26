#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int n, u = 0, l = 0;
	n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			u++;
		}
		else if (s[i] >= 97 && s[i] <= 122) {
			l++;
		}
	}
	if (u > l) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	else {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	cout << s << "\n";
	return 0;
}