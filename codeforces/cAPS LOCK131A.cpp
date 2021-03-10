#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cond=1;
    for(int i=1; i<s.length(); i++)
        if(islower(s[i]))
            cond=0;
    if(cond)
    {
        for(int i=0; i<s.length(); i++)
        if(islower(s[i]))
            s[i]-=32;
        else
            s[i]+=32;
    }
    cout<<s;
}
