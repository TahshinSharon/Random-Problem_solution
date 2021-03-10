#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n],count1=0,count2=0,ind1,ind2;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]%2==0)
        {
            count1+=1;
            ind1=i+1;
        }
        else{
            count2+=1;
            ind2=i+1;
        }
    }
    if(count1>count2)
    {
        cout<<ind2<<endl;
    }
    else cout<<ind1<<endl;
    return 0;
}