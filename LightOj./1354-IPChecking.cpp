#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define md                  1000000007
#define mxn                  300005
#define var                 1005
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<int,int>
#define nline "\n"
int btd(int n) {
	int num = n;
	int val = 0;
	int tmp = num;
	int b = 1;
	while (tmp) {
		int ld = tmp % 10;
		tmp = tmp / 10;
		val += (ld * b);
		b = b * 2;
	}
	return val;
}
void solve() {
	int a1, b1, c1, d1, a2, b2, c2, d2;
	char s;
	cin >> a1 >> s >> b1 >> s >> c1 >> s >> d1;
	cin >> a2 >> s >> b2 >> s >> c2 >> s >> d2;
	a2 = btd(a2);
	b2 = btd(b2);
	c2 = btd(c2);
	d2 = btd(d2);
	if (a1 == a2 && b1 == b2 && c1 == c2 && d1 == d2) {
		cout << "Yes" << nline;
	}
	else {
		cout << "No" << nline;
	}
}
int main() {
	int t = 1;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}
