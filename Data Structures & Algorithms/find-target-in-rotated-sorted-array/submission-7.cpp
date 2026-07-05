class Solution {
public:
    int check(vector<int>&nums, int low, int high, int target){
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return mid;
            else if (nums[mid]>target) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }
    int check_low_idx(vector<int>&nums){
        if(nums.size()==1 or nums.back()>nums[0]) return 0;
        int low =0, high = nums.size()-1;
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid]>nums.back()) low =mid+1;
            else high = mid;
        }
        return low;
    }
    int search(vector<int>& nums, int target) {
        int low_idx = check_low_idx(nums);
        if(target>nums.back()) return check(nums, 0, low_idx, target);
        return check(nums,low_idx,nums.size()-1,target);
    }
};
