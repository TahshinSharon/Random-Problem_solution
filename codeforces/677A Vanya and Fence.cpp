#include<iostream>
using namespace std;
int main()
{
    int n,h,res=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>h){
            res+=2;
        }
        else res+=1;
    }
    cout<<res<<endl;
    return 0;
}