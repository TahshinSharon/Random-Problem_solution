#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
void solve() {
	int n;
	ll sum = 0;
	cin >> n;
	sum += n;
	for (int i = 1; i < n; i++) {
		int temp = n - i;
		temp = temp * i;
		sum += temp;
	}
	cout << sum << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}