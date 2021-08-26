#include<iostream>
#include<string>
using namespace std;
int main() {
	int n, ans1 = 0, ans2 = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			ans1++;
		}
		else if (s[i] == 'D') {
			ans2++;
		}
	}
	if (ans1 == ans2) {
		cout << "Friendship" << "\n";
	}
	else if (ans1 > ans2) {
		cout << "Anton" << "\n";
	}
	else if (ans1 < ans2) {
		cout << "Danik" << "\n";
	}
}