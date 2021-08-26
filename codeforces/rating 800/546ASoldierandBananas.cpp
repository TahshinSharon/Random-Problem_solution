#include<iostream>
using namespace std;
int main() {
	int k, n, w, money = 0, ans;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++) {
		money += i * k;
	}
	ans = money - n;
	if (ans <= 0) {
		cout << 0 << "\n";
	}
	else {
		cout << ans << "\n";
	}
}