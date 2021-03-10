#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int b,d=1;
        cin>>b;
        vector<int> v;
        for(;;){
            if(b%10!=0){
                v.push_back((b%10)*d);
            }
            b/=10;
            d*=10;
            if(b==0){
                break;
            }
        }
        cout<<v.size()<<endl;
        for(int j=0;j<v.size();j++){
            cout<<v[j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}