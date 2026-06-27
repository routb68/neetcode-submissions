class Solution {
public:
    int go(vector<int>&nums,int lidx, int ridx){
        if(ridx-lidx<=1) return max(nums[lidx], nums[ridx]);
        vector<int> dp(ridx-lidx+1);
        dp[0]= nums[lidx]; 
        dp[1]=max(nums[lidx],nums[lidx+1]);
        for(int i=2;i<ridx-lidx+1;++i){
            dp[i]= max(nums[i+lidx]+dp[i-2], dp[i-1]);
        }
        return dp[ridx-lidx];
    }
    int rob(vector<int>& nums) {
        if(nums.size()<=2) return *max_element(nums.begin(),nums.end());
        return max(go(nums,0,nums.size()-2),go(nums,1,nums.size()-1));
    }
};
