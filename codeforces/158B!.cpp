#include<bits//stdc++.h>
using namespace std;
int a[5], n, i, Test;
int main(){

	cin >> Test;
	while(cin >> n)		a[n]++;

	a[1] = max(a[1] - a[3], 0);

	cout << a[3] + a[4] + (a[1] + 2 * a[2] + 3) / 4;
	return 0;
}
