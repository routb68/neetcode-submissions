class Solution {
public:
    int go_low_idx(vector<int>&nums){
        if(nums.size()==1 or nums.back()>nums[0]) return 0;
        int low = 0, high = nums.size()-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid]<nums[0]) high=mid;
            else low = mid+1;
        }
        return low;
    }
    int bs(vector<int>&nums,int low,int high,int target){
        while(low<=high){
            int mid = low +(high-low)/2;
            // cout<<mid<<endl;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high= mid-1;
            else low = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       int low_idx = go_low_idx(nums);
    //    cout<<low_idx;
       if(nums.back()>=target) return bs(nums,low_idx,nums.size()-1,target);
       return bs(nums,0,low_idx-1,target);
    }
};
