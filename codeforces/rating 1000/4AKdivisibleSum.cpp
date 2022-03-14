#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
void solve() {
	ll n, k;
	cin >> n >> k;
	for (ll i = 1;; i++) {
		if (n * i >= k) {
			cout << i << endl;
			break;
		}
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