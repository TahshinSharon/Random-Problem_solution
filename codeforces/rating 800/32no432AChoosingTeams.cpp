#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, k, x, count = 0;
	cin >> n >> k;
	vector<int>y;
	for (int i = 0; i < n; i++) {
		cin >> x;
		y.push_back(x);
		if ((y[i] + k) <= 5) {
			count++;
		}
	}
	cout << count / 3 << "\n";
	return 0;
}