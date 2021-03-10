#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; string word, ans;
	set<char> alphabet;
	cin >> n;
	cin >> word;
	for (int i=0; i<word.size(); i++){
		if (word[i] <= 90) word[i] += 32;
		alphabet.insert(word[i]);
	}
	if (alphabet.size() == 26) ans = "YES";
	else ans = "NO";
	cout << ans << '\n';

	return 0;
}