#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    s4=s1+s2;
    sort(s4.begin(),s4.end());
    sort(s3.begin(),s3.end());
    if(s3==s4){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}