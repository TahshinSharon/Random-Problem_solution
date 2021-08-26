#include<iostreeam>
using namespace std;
int main() {
	int a, b, c = 1, ans = 0;
	cin >> a >> b;
	while (c) {
		a = 3 * a;
		b = 2 * b;
		ans++;
		if (a > b) {
			cout << ans << "\n";
			break;
		}
	}
}