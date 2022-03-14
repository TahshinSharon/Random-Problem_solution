#include<bits/stdc++.h>
using namespace std;
void solve() {
	string v;
	cin >> v;
	char s = 'h';
	int flag{1};
	for (int i = 0; i < v.length(); i++) {
		if (v[i] == s)
		{
			flag++;
		}
		if (flag == 2)
			s = 'e';
		if (flag == 3)
			s = 'l';
		if (flag == 4)
			s = 'l';
		if (flag == 5) {
			s = 'o';
		}

		if (flag == 6)
			break;
	}

	if (flag == 6)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
int main()
{
	int t = 1;
	//scanf("%d", &t);
	while (t--) {
		solve();
	}
	return 0;
}