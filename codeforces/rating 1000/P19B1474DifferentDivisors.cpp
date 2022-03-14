#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
#define nline "\n"
void solve() {
	int d;
	cin >> d;
	vector<int> p;
	for (int i = d + 1; ; i++)
	{
		int t = 1;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				t = 0;
				break;
			}
		}
		if (t)
		{
			p.push_back(i);
			break;
		}
	}
	for (int i = p.back() + d; ; i++)
	{
		int t = 1;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				t = 0;
				break;
			}
		}
		if (t)
		{
			p.push_back(i);
			break;
		}
	}
	cout << min(1ll * p[0] * p[1], 1ll * p[0] * p[0] * p[0]) << nline;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		//cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}