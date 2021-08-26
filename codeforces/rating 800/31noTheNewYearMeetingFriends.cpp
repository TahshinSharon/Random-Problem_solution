#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int x1, x2, x3, ans, a[3];
	cin >> x1 >> x2 >> x3;
	a[0] = x1;
	a[1] = x2;
	a[2] = x3;
	sort(a, a + 3);
	ans = (a[2] - a[1]) + (a[1] - a[0]);
	cout << ans << endl;
}