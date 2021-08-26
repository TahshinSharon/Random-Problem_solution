#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long a, b, ans1, ans2;
		cin >> a >> b;
		if (a == b) {
			cout << 0 << " " << 0 << endl;

		}
		else {
			ans1 = abs(a - b);
			ans2 = min(a % ans1, ans1 - a % ans1);
			cout << ans1 << " " << ans2 << endl;
		}
	}
	return 0;
}