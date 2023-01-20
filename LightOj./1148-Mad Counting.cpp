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
	int n;
	cin >> n;
	map<int, int>mp;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		mp[x]++;
	}
	ll ans = 0;
	for (auto i : mp) {
		int team = (i.second / (i.first + 1));
		if ((i.second % (i.first + 1)) != 0) {
			team++;
		}
		ans += team * (i.first + 1);
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
