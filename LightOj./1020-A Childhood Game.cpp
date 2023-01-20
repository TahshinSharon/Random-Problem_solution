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
	ll n;
	string s;
	cin >> n >> s;
	if (s[0] == 'B') {
		if (n % 3) {
			cout << "Bob" << nline;
		}
		else {
			cout << "Alice" << nline;
		}
	}
	else {
		if (n == 1) {
			cout << "Bob" << nline;
		}
		else if ((n - 1) % 3) {
			cout << "Alice" << nline;
		}
		else {
			cout << "Bob" << nline;
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
