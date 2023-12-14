//Link:https://leetcode.com/problems/combination-sum-ii/submissions/

class Solution {
public:
    void func(int i,vector<vector<int>>&ans,vector<int>&v,vector<int>&c,int t){
        if(t==0){
            ans.push_back(v);
            return;
        }
        for(int in=i;in<c.size();in++){
            if(in>i&&c[in]==c[in-1]){
                continue;
            }
            if(t-c[i]<0){
                break;
            }
            v.push_back(c[in]);
            func(in+1,ans,v,c,t-c[in]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(c.begin(),c.end());
        func(0,ans,v,c,t);
        return ans;
    }
};
