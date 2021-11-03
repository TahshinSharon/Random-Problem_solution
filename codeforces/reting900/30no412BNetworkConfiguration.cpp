#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, k, temp, ans;
	cin >> n >> k;
	vector<int>a;
	for (auto i = 0; i < n; i++) {
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end(), greater<int>());
	ans = a[k - 1];
	cout << ans << endl;
	return 0;
}