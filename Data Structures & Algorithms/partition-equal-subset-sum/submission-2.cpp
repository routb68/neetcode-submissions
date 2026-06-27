class Solution {
public:
    bool go(vector<int>&nums,int idx, int target){
        if(target==0) return true;
        if(idx==nums.size()) return false;
        bool ans = false;
        if(nums[idx]<=target) ans = ans || go(nums,idx+1,target-nums[idx]);
        ans = ans||go(nums,idx+1,target);
        return ans;
    }
    bool canPartition(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0);
        if(total%2) return false;
        return go(nums,0,total/2);
    }
};
