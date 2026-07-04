class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();++i){
            int tar = target-nums[i];
            int low =i+1,high = nums.size()-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(nums[mid]==tar){
                    return {i+1,mid+1};
                }else if(nums[mid]>tar){
                    high=mid-1;
                }else{
                    low = mid+1;
                }
            }
        }
        return {};
    }
};
