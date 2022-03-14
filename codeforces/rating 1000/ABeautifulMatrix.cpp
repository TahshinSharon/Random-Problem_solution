#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
void solve() {
	int a[5][5];
	int b, c;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
			if (a[i][j] == 1) {
				b = i;
				c = j;
			}
		}
	}
	int ans = abs(2 - b) + abs(2 - c);
	cout << ans << endl;
	.
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}