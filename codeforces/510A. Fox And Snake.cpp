#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,count=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        if(i%2==0){
            count++;
            if(count%2!=0){

                for(j=1;j<=m;j++){

                    if(j==m){

                        cout<<"#";
                    }
                    else cout<<".";
                }
                cout<<endl;
            }
            else{
                for(j=1;j<=m;j++){

                    if(j==1){

                        cout<<"#";
                    }
                    else cout<<".";
                }
                cout<<endl;
            }
        }
        else{
            for(j=1;j<=m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
    }
    return 0;
}