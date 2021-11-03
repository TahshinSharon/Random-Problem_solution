#include<iostream>
using namespace std;
int main()
{
	int n, ans = 0, count = 0;
	cin >> n;
	int a[n];
	for (auto i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (auto i = 0; i < n; i++) {
		if (a[i] <= a[i + 1]) {
			count++;
		}
		else {
			if (ans < (count + 1)) {
				ans = count + 1;
			}
			else ans = ans;
			count = 0;
		}
	}
	if (ans < (count)) {
		ans = count;
	}
	else ans = ans;
	cout << ans << endl;
	return 0;
}