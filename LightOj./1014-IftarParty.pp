#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  5000005
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define nline "\n"
void solve(){
    ll p,l;
    scanf("%lld%lld",&p,&l);
    ll e=p-l;
    vector<ll>v;
    if(2*l>=p){
        printf("impossible\n");
        return;
    }
    for(ll i=1;i*i<=e;i++){
        if(e%i==0){
           v.push_back(i);
           if(e/i!=i){
            v.push_back(e/i);
           }
        }
    }
    sort(v.begin(),v.end());
        for(auto i:v){
                if(i>l){
                 printf("%lld ",i);
                }
        }
        printf("\n");
}
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t=1;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++){
        printf("Case %d: ",i);
        solve();
    }
    return 0;
}
