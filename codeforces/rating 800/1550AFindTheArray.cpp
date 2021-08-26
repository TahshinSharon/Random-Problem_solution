#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int t, s;
	cin >> t;
	while (t--) {
		int s;
		double ans;
		cin >> s;
		ans = sqrt(s);
		cout << ceil(ans) << endl;
	}
	return 0;
}