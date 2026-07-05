class Solution {
public:
    int findMin(vector<int> &nums) {
        if(nums.size()==1 or nums.back()>nums[0]) return nums[0];
        int low = 0, high = nums.size()-1;
        while(low<high){
            int mid = low +(high-low)/2;
            if(nums[mid]>nums.back())low = mid+1;
            else high = mid;
        }
        return nums[low];
    }
};
