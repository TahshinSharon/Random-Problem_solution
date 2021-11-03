#include<iostream>
#include<vector>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}
void solve() {
	int n, count = 0, x;
	vector<int>v;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	for (auto j = 0; j < n; j++) {
		for (auto k = j; k < n; k++) {
			if (j == k)
				continue;
			if (gcd(v[j], 2 * v[k]) > 1 || gcd(v[k], 2 * v[j]) > 1) {
				count++;
			}
		}
	}
	cout << count << "\n";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}