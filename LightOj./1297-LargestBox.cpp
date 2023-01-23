#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define md                  1000000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define nline "\n"
double vol(double x, double l, double w) {
	return (w - 2 * x) * (l - 2 * x) * x;
}
void solve() {
	double l, w;
	cin >> l >> w;
	double n = (w + l);
	double q = w * l;
	double x1 = (4 * n + sqrt(16 * n * n - 48 * q)) / 24.0;
	double x2 = (4 * n - sqrt(16 * n * n - 48 * q)) / 24.0;
	double ans = 0.0;
	if (x1 > 0) {
		ans = max(ans, vol(x1, l, w));
	}
	if (x2 > 0) {
		ans = max(ans, vol(x2, l, w));
	}
	printf("%.9lf\n", ans);
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
