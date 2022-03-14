#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
#define nline "\n"
void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int d = a + c;
	if ((d % 2) == 0 && (d / 2) > b && (d / 2) % b == 0) {
		cout << "YES" << nline;
		return;
	}
	d = b - c;
	int aa = b + d;
	if (aa > 0 && aa % a == 0) {
		cout << "YES" << nline;
		return;
	}
	d = a - b;
	int cc = b - d;
	if (cc > 0 && cc % c == 0) {
		cout << "YES" << nline;
		return;
	}
	cout << "NO" << nline;
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