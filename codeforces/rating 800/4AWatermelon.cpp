#include<iostream>
using namespace std;
int main() {
	int w;
	cin >> w;
	if (w % 2 == 0 && w != 2 && w != 1) {
		cout << "YES" << "\n";
	}
	else cout << "NO" << "\n";
	return 0;
}