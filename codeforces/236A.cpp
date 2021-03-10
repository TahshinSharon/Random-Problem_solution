#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string str;
    int count=0;
    int flag=0;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++){
        flag=0;
        for(int j=0;j<i;j++){

            if(str[j]==str[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;

    }
    return 0;
}
