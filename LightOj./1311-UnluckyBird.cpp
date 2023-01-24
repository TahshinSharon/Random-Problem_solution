#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define md                  1000000007
#define mxn                  300005
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define nline "\n"
void solve() {
	double v1, v2, v3, a1, a2;
	cin >> v1 >> v2 >> v3 >> a1 >> a2;
	double t1 = v1 / a1;
	double t2 = v2 / a2;
	double s, bs;
	if (t1 > t2) {
		bs = v3 * t1;
	}
	else {
		bs = v3 * t2;
	}
	s = v1 * t1 - 0.5 * a1 * t1 * t1;
	s += v2 * t2 - 0.5 * a2 * t2 * t2;
	printf("%.10lf %.10lf\n", s, bs);
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
