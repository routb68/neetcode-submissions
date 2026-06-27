class Solution {
public:
    int minCostClimbingStairs(vector<int>& cs) {
        int dp[101];
        dp[1]=0;dp[2]=0;
        for(int i=2;i<=cs.size();++i){
            dp[i] = min(dp[i-1]+cs[i-1],dp[i-2]+cs[i-2]);
        }
        return dp[cs.size()];
    }
};
