#include <cstring>
class Solution {
public:
    int dp[1001][1001];
    int dfs(vector<int>&nums,int i, int lidx){
        if(i==nums.size()) return 0;
        if(dp[i][lidx+1]!=-1) return dp[i][lidx+1];
        int ans = dfs(nums,i+1,lidx);
        if(lidx==-1 or nums[i]>nums[lidx]){
            ans = max(ans, 1+dfs(nums,i+1,i));
        }
        dp[i][lidx+1]=ans;
        return ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return dfs(nums,0,-1);
    }
};
