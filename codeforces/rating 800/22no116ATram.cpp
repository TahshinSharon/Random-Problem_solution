#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n], b[n], c[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	c[0] = abs(a[0] - b[0]);
	for (int j = 1; j < n; j++) {
		c[j] = (c[j - 1] - a[j]) + b[j];
	}
	int* ans = max_element(c, c + n);
	cout << *ans << endl;
}