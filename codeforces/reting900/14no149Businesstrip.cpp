#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int k, x, count = 0, temp = 0, sum = 0;
	vector<int>v;
	cin >> k;
	for (auto i = 0; i < 12; i++) {
		cin >> x;
		v.push_back(x);
		sum += v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < 12; i++) {
		temp += v[i];
		count++;
		if (k == 0) {
			count = 0;
			break;
		}
		if (sum < k) {
			count = -1;
			break;
		}
		if (temp >= k) {
			break;
		}
	}
	cout << count << "\n";
	return 0;
}