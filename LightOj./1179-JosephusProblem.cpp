#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define md                  1000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define nline "\n"
ll w(ll n, ll k) {
	if (n == 1) {
		return 1;
	}
	return (w(n - 1, k) + k - 1) % n + 1;
}
void solve() {
	ll n, k;
	cin >> n >> k;
	cout << w(n, k) << nline;;
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
