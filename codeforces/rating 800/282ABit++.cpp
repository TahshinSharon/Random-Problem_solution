#include<iostream>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	string str;
	while (n--) {
		getline(cin, str);
		if ((str == "++X") || (str == "X++")) {
			ans += 1;
		}
		else if ((str == "--X") || (str[2] == "X--")) {
			ans -= 1;
		}
	}
	cout << ans << endl;
}