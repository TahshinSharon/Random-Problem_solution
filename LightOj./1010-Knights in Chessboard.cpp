#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  1000000
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define nline "\n"
void solve() {
	ll n, m;
	cin >> m >> n;
	ll mn = m * n, ans = 0;
	if (n == 1 || m == 1) {
		ans = mn;
	}
	else if (n == 2 || m == 2) {
		ll x;
		if (m == 2) {
			x = n;
		}
		else {
			x = m;
		}
		if (x % 4 == 1) {
			ans = x + 1;
		}
		else if (x % 4 == 2) {
			ans = x + 2;
		}
		else if (x % 4 == 3) {
			ans = x + 1;
		}
		else if (x % 4 == 0) {
			ans = x;
		}
	}
	else if (mn % 2) {
		ans = (mn / 2) + 1;
	}
	else {
		ans = mn / 2;
	}
	cout << ans << nline;
}
int main() {
	int t = 1;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}
