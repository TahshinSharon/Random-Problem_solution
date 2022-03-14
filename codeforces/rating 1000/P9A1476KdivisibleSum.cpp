#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
void solve() {
	ll n, k;
	cin >> n >> k;
	ll ans;
	if (n == 1) {
		cout << k << endl;
	}
	else if (n == k) {
		cout << 1 << endl;
	}
	else if (n > k) {
		if (n % k == 0) {
			ans = 1;
		}
		else {
			ans = 2;
		}
		cout << ans << endl;
	}
	else if (n < k) {
		if (k % n == 0) {
			ans = k / n;
		}
		else {
			ans = (k / n) + 1;
		}
		cout << ans << endl;
	}
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