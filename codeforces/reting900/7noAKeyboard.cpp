#include<iostream>
#include<string>
using namespace std;
int main() {
	char c;
	cin >> c;
	string s, a = "qwertyuiopasdfghjkl;zxcvbnm,./";
	cin >> s;
	if (c == 'R') {
		for (int i = 0; i < s.length(); i++) {
			int k = a.find(s[i]);
			cout << a[k - 1];
		}
	}
	else if (c == 'L') {
		for (int i = 0; i < s.length(); i++) {
			int k = a.find(s[i]);
			cout << a[k + 1];
		}
	}
	cout << "\n";
	return 0;
}