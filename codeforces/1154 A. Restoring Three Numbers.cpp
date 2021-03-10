#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    vector<int> n(4);
    cin>>n[0]>>n[1]>>n[2]>>n[3];
    sort(n.begin(),n.end());
    a=n[3]-n[2];
    b=n[3]-n[1];
    c=n[3]-n[0];
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}