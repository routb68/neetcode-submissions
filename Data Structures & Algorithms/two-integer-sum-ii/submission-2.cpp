class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int low = 0, high = nums.size()-1;
        while(low<high){
            if( nums[low]+nums[high]==tar) return {low+1,high+1};
            else if (nums[low]+nums[high] > tar) --high;
            else if (nums[low]+nums[high]<tar) ++low;
        }
        return {};
    }
};
