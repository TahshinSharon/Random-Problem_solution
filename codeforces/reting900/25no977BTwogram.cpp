#include<iostream>
using namespace std;
int main()
{
	int n, count, ans = 0;
	cin >> n;
	string s, a, b, result;
	cin.ignore();
	getline(cin, s);
	for (int i = 0; i < n - 1; i++) {
		count = 0;
		for (int j = 0; j < n - 1; j++) {
			if (s[j] == s[i] && s[j + 1] == s[i + 1]) {
				count++;
			}
		}
		if (count >= ans) {
			ans = count;
			string temp = "";
			temp += s[i];
			temp += s[i + 1];
			result = temp;
		}
	}
	cout << result << endl;
}