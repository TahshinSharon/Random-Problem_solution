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
	ll n, d;
	cin >> n >> d;
	ll res = 0, ans = 0;
	while (1) {
		ans++;
		res = (res * 10 + d) % n;
		if (res == 0) {
			break;
		}
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
