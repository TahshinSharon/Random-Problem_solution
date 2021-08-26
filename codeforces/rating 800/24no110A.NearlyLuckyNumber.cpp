#include<iostream>
#include<string>
using namespace std;
int main() {
	long long n, count = 0;
	cin >> n;
	string s;
	s = to_string(n);
	for (long long i = 0; i < s.length(); i++) {
		if (s[i] == '4' || s[i] == '7') {
			count++;
		}
	}
	cout << (count == 4 || count == 7 ? "YES" : "NO") << endl;
}