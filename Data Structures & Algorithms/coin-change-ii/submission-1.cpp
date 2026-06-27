#include<cstring>
class Solution {
public:
    int dp[5001][101];
    int go(vector<int>&cs, int target, int idx){
        if(target==0) return 1;
        if(target<0 or idx==cs.size()) return 0;
        if(dp[target][idx]!=-1) return dp[target][idx];
        dp[target][idx] = go(cs,target-cs[idx],idx);
        dp[target][idx] += go(cs,target,idx+1);
        return dp[target][idx];
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return go(coins,amount,0);
    }
};
