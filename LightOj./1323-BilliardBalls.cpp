#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define md                  1000000007
#define mxn                  300005
#define var                 1005
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<int,int>
#define nline "\n"
pp a[var];
void solve() {
	char s[3];
	int l, w, n, k, x, y;
	cin >> l >> w >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		cin >> s;
		if (s[0] == 'N') y += k;
		else y -= k;
		if (s[1] == 'E') x += k;
		else x -= k;
		x = (x % (2 * l) + (2 * l)) % (2 * l);
		y = (y % (2 * w) + (2 * w)) % (2 * w);
		if (x > l) x = 2 * l - x;
		if (y > w) y = 2 * w - y;
		a[i].first = x;
		a[i].second = y;
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i].first << " " << a[i].second << nline;
	}
}
int main() {
	int t = 1;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		cout << "Case " << i << ":" << nline;
		solve();
	}
	return 0;
}
