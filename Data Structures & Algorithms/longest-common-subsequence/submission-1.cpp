#include<cstring>
class Solution {
public:
    int dp[1001][1001];
    int dfs(string &s1, string &s2, int idx1, int idx2){
        if(idx1==s1.size() or idx2==s2.size()) return 0;
        if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
        if(s1[idx1]==s2[idx2]) dp[idx1][idx2] = 1 + dfs(s1,s2,idx1+1, idx2+1);
        else dp[idx1][idx2]= max(dfs(s1,s2,idx1+1,idx2), dfs(s1,s2,idx1,idx2+1));
        return dp[idx1][idx2];
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return dfs(text1,text2,0,0);
    }
};
