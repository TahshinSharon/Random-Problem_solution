//Problem link:https://leetcode.com/problems/subsets-ii/submissions/
class Solution {
public:
    void func(int i,vector<int>&nums,vector<int>v,vector<vector<int>>&ans){
        ans.push_back(v);
        for(int j=i;j<nums.size();j++){
            if(j!=i&&nums[j]==nums[j-1]) continue;
            v.push_back(nums[j]);
            func(j+1,nums,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        func(0,nums,v,ans);
        return ans;
    }
};
