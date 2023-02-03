#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define md                  5000005
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define nline "\n"
vector<ull>ans(md);
vector<int>phi(md);
void phi_md(){
    for(int i=0;i<=md;i++){
        phi[i]=i;
    }
    for(int i=2;i<=md;i++){
        if(phi[i]==i){
            for(int j=i;j<=md;j+=i){
                phi[j]-=phi[j]/i;
            }
        }
    }
    for(int i=1;i<=md;i++){
        ull x=phi[i];
        ans[i]=ans[i-1]+x*x;
    }
}
void solve(){
    int a,b;
    cin>>a>>b;
    cout<<ans[b]-ans[a-1]<<nline;
}
signed int main(){
    int t=1;
    phi_md();
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
