#include <cstring> 
class Solution {
public:
    int dp[50];
    int dfs(int n){
        if(dp[n]!=-1) return dp[n];
        if(n<2) dp[n]=1;
        else dp[n]= dfs(n-1)+dfs(n-2);
        return dp[n];
    }
    int climbStairs(int n) {
       memset(dp,-1,sizeof(dp));
       return dfs(n);
    }
};
