class Solution {
public:
    vector<vector<int>>ans;
    void generateCombinationSum(vector<int>&nums,vector<int>&temp_nums,int target, int idx){
        if(target==0){
            ans.emplace_back(temp_nums);
            return;
        }
        if(target<0) return;
        if(idx==nums.size()){
            return;
        }
        generateCombinationSum(nums,temp_nums,target,idx+1);
        temp_nums.push_back(nums[idx]);
        generateCombinationSum(nums,temp_nums,target-nums[idx],idx);
        // generateCombinationSum(nums,temp_nums,target-nums[idx],idx+1);
        temp_nums.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp;
        generateCombinationSum(nums,temp,target,0);
        return ans;
    }
};
