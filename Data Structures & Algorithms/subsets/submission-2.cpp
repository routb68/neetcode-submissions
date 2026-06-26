class Solution {
public:
    void backtrack(vector<vector<int>>&ans, vector<int>&nums, int idx,vector<int>&temp_ans){
        if(idx==nums.size()){
            ans.emplace_back(temp_ans);
            return;
        }
        temp_ans.push_back(nums[idx]);
        backtrack(ans,nums,idx+1,temp_ans);
        temp_ans.pop_back();
        backtrack(ans,nums,idx+1,temp_ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp_ans;
        backtrack(ans,nums,0,temp_ans);
        return ans;
    }
};
