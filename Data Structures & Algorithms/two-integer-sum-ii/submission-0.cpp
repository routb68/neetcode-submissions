class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        for(int i=0;i<nums.size();++i){
            for(int j = i+1;j<nums.size() and nums[i]+nums[j]<=tar;++j){
                if(nums[i]+nums[j]==tar) return {i+1,j+1};
            }
        }
        return {};
    }
};
