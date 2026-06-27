#include<cstring>
class Solution {
public:
    int dp[101];
    int dfs(vector<int>& nums, int idx){
        if(dp[idx]!=-1) return dp[idx];
        if(idx<2) dp[idx]= *max_element(nums.begin(), nums.begin()+idx+1);
        else dp[idx]= max(dfs(nums,idx-1), nums[idx]+ dfs(nums,idx-2));
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return dfs(nums,nums.size()-1);
    }
};
