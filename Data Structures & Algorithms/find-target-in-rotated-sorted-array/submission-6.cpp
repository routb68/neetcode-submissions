class Solution {
public:
    int min_idx(vector<int>&nums){
        if(nums.size()==1 or nums.back()>nums[0]) return 0;
        int low =0, high=nums.size();
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid]>nums.back()) low = mid+1;
            else high= mid;
        }
        return low;
    }
    int idx_search(vector<int>&nums,int target, int low, int high){
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high= mid-1;
            else low = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        // if(nums.size()==1)
        int idx = min_idx(nums);
        if(target<=nums.back()) return idx_search(nums,target,idx,nums.size()-1);
        return idx_search(nums,target, 0,idx-1);
    }
};
