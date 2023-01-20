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
	ll s;
	cin >> s;
	ll tm = sqrt(s);
	if (tm * tm == s) {
		if (tm % 2) {
			cout << 1 << " " << tm << nline;
		}
		else {
			cout << tm << " " << 1 << nline;
		}
	}
	else {
		ll tmp = tm * 2 + 1;
		if (tm % 2) {
			if (s - (tm * tm) <= (tmp / 2) + 1) {
				cout << s - (tm * tm) << " " << tm + 1 << nline;
			}
			else {
				cout << tm + 1 << " " << tmp + 1 - (s - (tm * tm)) << nline;
			}
		}
		else {
			if (s - (tm * tm) <= (tmp / 2) + 1) {
				cout << tm + 1 << " " << s - (tm * tm) << nline;
			}
			else {
				cout << tmp + 1 - (s - (tm * tm)) << " " << tm + 1 << nline;
			}
		}
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
