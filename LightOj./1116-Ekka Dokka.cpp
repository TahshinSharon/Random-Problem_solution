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
	ll w;
	cin >> w;
	ll odd = w / 2;
	ll evn = 2;
	if (w % 2) {
		cout << "Impossible" << nline;
		return;
	}
	else {
		while (odd % 2 == 0) {
			odd = odd / 2;
			evn = evn * 2;
		}
	}
	cout << odd << " " << evn << nline;
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
