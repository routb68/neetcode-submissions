class Solution {
public:
    int numDecodings(string s) {
        int dp[101];
        dp[s.size()]=1;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i]=='0') dp[i]=0;
            else dp[i]= dp[i+1];
            if(i+1<s.size() and (s[i]=='1' or (s[i]=='2' and s[i+1]<'7'))) dp[i] += dp[i+2];
        }
        return dp[0];
    }
};
