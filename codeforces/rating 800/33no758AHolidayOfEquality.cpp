#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, x, ans = 0;
	cin >> n;
	vector<int>a;
	for (auto i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	for (auto i = 0; i < n; i++) {
		ans += (a[n - 1] - a[i]);
	}
	cout << ans << "\n";
	return 0;
}