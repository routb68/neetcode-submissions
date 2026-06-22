class Solution {
public:
    int checkPossibility(vector<int>&nums,int target,int idx){
        if(idx==nums.size()) return target==0;
        return checkPossibility(nums, target-nums[idx],idx+1) + checkPossibility(nums, target+nums[idx],idx+1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return checkPossibility(nums,target,0);
    }
};
