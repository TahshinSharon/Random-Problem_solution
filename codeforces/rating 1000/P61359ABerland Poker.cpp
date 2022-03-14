#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
void solve() {
	ll n, m, k;
	cin >> n >> m >> k;
	ll ans, temp;
	if (m == 0) {
		ans = 0;
	}
	else if ((n / k) >= m) {
		ans = m;
	}
	else if ((n / k) < m) {
		ans = (n / k);
		temp = n / k;
		temp = n - temp;
		temp = ceil(temp / m - 1);
		ans -= temp;
	}
	cout << ans << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}