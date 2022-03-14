#include<bits/stdc++.h>
using namespace std;
void solve() {
	int a, b, c, ans;
	cin >> a >> b >> c;
	if ((a + b + c) % 3 == 0) {
		ans = 0;
	}
	else ans = 1;
	cout << ans << endl;
}
int main()
{
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		solve();
	}
	return 0;
}