class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans =0;
        int low=0,high = nums.size()-1;
        while(low<high){
            ans = max(ans, min(nums[low],nums[high]) *(high-low) );
            if(nums[low]>nums[high])--high;
            else ++low;
        }
        return ans;
    }
};
