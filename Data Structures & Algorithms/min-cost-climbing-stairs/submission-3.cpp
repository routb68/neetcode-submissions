#include<cstring>
class Solution {
   public:
    int dp[102];
    int dfs(vector<int>& cs, int idx) {
        if (dp[idx] != -1) return dp[idx];
        if (idx < 2)
            dp[idx] = 0;
        else
            dp[idx] = min(cs[idx - 1] + dfs(cs, idx - 1), cs[idx - 2] + dfs(cs, idx - 2));
        return dp[idx];
    }
    int minCostClimbingStairs(vector<int>& cs) {
        memset(dp, -1, sizeof(dp));
        return dfs(cs, cs.size());
    }
};
