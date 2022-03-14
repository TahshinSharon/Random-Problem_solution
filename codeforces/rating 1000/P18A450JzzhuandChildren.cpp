#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
#define nline "\n"
void solve() {
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int tmp = a[1];
	int ans = 1;
	for (int i = 2; i <= n; i++) {
		if (((a[i] + m - 1 ) / m) >= ((tmp + m - 1) / m)) {
			tmp = a[i];
			ans = i;
		}
	}
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	for (int i = 1; i <= t; i++) {
		//cout<<"Case "<<i<<": ";
		solve();
	}
	return 0;
}