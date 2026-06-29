class Solution {
public:
    int check_low(vector<int>&nums){
        if(nums.size()==1 or nums.back()>nums[0]) return 0;
        int low =0,high=nums.size()-1;
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid]<nums[0])high = mid;
            else low = mid+1;
        }
        return low;
    }
    int search_segment(vector<int>&nums, int target, int low, int high){
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target)high=mid-1;
            else low = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int low_idx = check_low(nums);
        if(target<=nums.back()) return search_segment(nums, target,low_idx,nums.size()-1);
        return search_segment(nums,target,0,low_idx-1);
    }
};
