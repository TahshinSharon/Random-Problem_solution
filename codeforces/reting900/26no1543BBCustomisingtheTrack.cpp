#include<iostream>
using namespace std;
int main()
{
	long long t, n, x, ans;
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n];
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		x = sum % n;
		ans = x * (n - x);
		cout << ans << endl;
	}
	return 0;
}