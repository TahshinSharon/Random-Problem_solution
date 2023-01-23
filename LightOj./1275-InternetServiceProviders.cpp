#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define md                  1000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define nline "\n"
void solve() {
	ll n, c;
	cin >> n >> c;
	if (n == 0) {
		cout << 0 << nline;
		return;
	}
	ll t1 = c / (2 * n);
	ll t2 = (c / (2 * n)) + 1;
	ll f1 = t1 * (c - t1 * n);
	ll f2 = t2 * (c - t2 * n);
	if (f1 >= f2) {
		cout << t1 << nline;
	}
	else {
		cout << t2 << nline;
	}
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
