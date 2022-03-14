#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
void solve() {
	ll n;
	cin >> n;
	ll ans = 0;
	ll a = n / 2;
	for (ll i = 1; i <= a; i++) {
		ans += i * i;
	}
	ans = ans * 8;
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