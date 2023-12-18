//Link:https://leetcode.com/problems/permutation-sequence/
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        int cnt=1;
        string s="";
        do{
            if(cnt==k){
                for(int i=0;i<n;i++){
                    s+=to_string(v[i]);
                }
                break;
            }
            cnt++;
        }while(next_permutation(v.begin(),v.end()));
        return s;
    }
};
