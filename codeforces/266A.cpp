#include <bits/stdc++.h>
using namespace std;
main(){
	char a,b;int c=0,t;cin>>t>>a;
	while(t--){b=getchar();a==b?c++:a=b;}
	cout<<c<<'\n';
}
