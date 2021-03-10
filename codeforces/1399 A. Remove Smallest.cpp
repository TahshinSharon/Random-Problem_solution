#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        bool flg=true;
        int j=1;
        while(j<n){
            if(abs(a[j]-a[j-1])<=1){
                j++;
            }
            else {
                flg=false;
                break;
            }
        }
        if(flg){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}