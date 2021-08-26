#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string s, t;
	getline(cin, s);
	getline(cin, t);
	reverse(t.begin(), t.end());
	if (s == t) {
		cout << "YES" << "\n";
	}
	else cout << "NO" << "\n";
	return 0;
}