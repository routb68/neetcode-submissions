class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxrange=0;
        for(int i=0;i<nums.size();++i){
            if(maxrange<i) return false;
            maxrange = max(maxrange, nums[i]+i);
        }
        return true;
    }
};
