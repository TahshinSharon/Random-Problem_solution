#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ct=1;
    for(int i=0;i+1<s.size();i++){
 
     	if(s[i]==s[i+1])ct++;
     	else{
     		ct=1;
     	}
     	if(ct==7){
 
     		cout<<"YES";
     		return 0 ;
     	}
 
 
    }
    cout<<"NO";
 
 
    return 0;
}