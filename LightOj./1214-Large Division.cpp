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
	string a;
	ll b;
	cin >> a >> b;
	ll i, d = 0, l = a.length();
	if (a[0] == '-') i = 1;
	else i = 0;
	for (; i < l; i++) {
		d = (d * 10 + a[i] - '0');
		d %= b;
	}
	if (d) {
		cout << "not divisible" << nline;
	}
	else
		cout << "divisible" << nline;
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
