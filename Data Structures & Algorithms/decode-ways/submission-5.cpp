#include<cstring>
class Solution {
public:
    int dp[101];
    int go(string &s, int idx){
        if(idx==s.size()) return 1;
        if(dp[idx]!=-1) return dp[idx];
        int ans = 0;
        if(s[idx]!='0') ans += go(s,idx+1);
        if(idx+1<s.size() and (s[idx]=='1' or (s[idx]=='2' and s[idx+1]<'7'))) ans += go(s,idx+2);
        dp[idx]=ans;
        return dp[idx];
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return go(s,0);
    }
};
