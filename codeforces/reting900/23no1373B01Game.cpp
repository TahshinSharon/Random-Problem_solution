#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		int count1 = 0, count2 = 0, ans;
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '1') {
				count1 += 1;
			}
			else if (s[i] == '0') {
				count2 += 1;
			}
		}
		if (count1 < count2) {
			ans = count1;
		}
		else ans = count2;
		if (ans % 2 != 0) {
			cout << "DA" << endl;
		}
		else cout << "NET" << endl;
	}
	return 0;
}