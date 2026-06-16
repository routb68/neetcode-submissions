class Solution {
public:
    int go(vector<int>&nums,int mid){
        int cnt_hrs =0;
        for(int &x:nums){
            cnt_hrs += (x/mid);
            if(x%mid)++cnt_hrs;
        }
        return cnt_hrs;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int low = 1,high = *max_element(nums.begin(),nums.end());
        while(low<high){
            int mid = low +  (high-low)/2;
            if(go(nums,mid)<=h) high = mid;
            else low = mid +1;
        }
        return low;
    }
};
