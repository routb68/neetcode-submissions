class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>&nums,vector<int>&temp, int idx, int sum_t, int target){
        if(sum_t==target){
            ans.emplace_back(temp);
            return;
        }
        if(sum_t>target or idx==nums.size()) return;
        temp.emplace_back(nums[idx]);
        dfs(nums,temp,idx,sum_t+nums[idx], target);
        temp.pop_back();
        dfs(nums,temp,idx+1,sum_t,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        ans.clear();
        vector<int>temp;
        dfs(nums,temp,0,0,target);
        return ans;
    }
};
