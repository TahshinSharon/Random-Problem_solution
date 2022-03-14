#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
void solve() {
	ll a, b, n, s;
	cin >> a >> b >> n >> s;
	if (s % n <= b) {
		ll temp = a * n;
		temp += b;
		if (temp >= s) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	else {
		cout << "NO" << endl;
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