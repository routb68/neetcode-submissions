class Solution {
public:
    void backtrack(vector<int>&nums, vector<vector<int>>&ans, vector<int>&temp, int idx,int tar){
        if(tar<0) return;
        if(tar==0){
            ans.emplace_back(temp);
            return;
        }
        if(idx==nums.size()) return;
        temp.push_back(nums[idx]);
        backtrack(nums,ans,temp,idx,tar-nums[idx]);
        temp.pop_back();
        backtrack(nums,ans,temp,idx+1,tar);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int tar) {
        vector<vector<int>>ans;
        vector<int>temp;
        backtrack(nums,ans,temp,0,tar);
        return ans;
    }
};
