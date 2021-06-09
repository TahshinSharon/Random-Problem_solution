#include<iostream>
using namespace std;
int max(int arr[],int j){
    int max=arr[j];
    for(int i=0;i<j;i++){
        if(arr[i]>=max){
            return 0;
        }
    }
    return 1;
}
int min(int arr[],int j){
    int min=arr[j];
    for(int i=0;i<j;i++){
        if(arr[i]<=min){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,count=0;
    cin>>n;
    int a[n],ans[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=1;j<n;j++){
        for(int k=0;k<=j;k++){
            ans[k]=a[k];
        }
        if(max(ans,j)){
            count+=1;
        }
        else if(min(ans,j)){
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}