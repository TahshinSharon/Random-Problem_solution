#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,x,y,n,i;
    cin>>s>>n;
    vector<pair<int,int>>pa;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        pa.push_back({x,y});
    }
    sort(pa.begin(),pa.end());
    for(i=0;i<n;i++){
        if(s<=pa[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
        s+=pa[i].second;
    }
    cout<<"YES"<<endl;
    return 0;
}