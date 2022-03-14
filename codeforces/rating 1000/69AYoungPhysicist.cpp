#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin >> n;
	int a[3], sum1 = 0, sum2 = 0, sum3 = 0;
	while (n--) {
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		sum1 += a[0];
		sum2 += a[1];
		sum3 += a[2];
	}
	if (sum1 == 0 && sum2 == 0 && sum3 == 0) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}
int main()
{
	int t = 1;
	//scanf("%d", &t);
	while (t--) {
		solve();
	}
	return 0;
}
