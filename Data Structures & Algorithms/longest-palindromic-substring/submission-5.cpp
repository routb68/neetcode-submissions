class Solution {
public:
    string longestPalindrome(string s) {
        int max_len = 0;
        string ans ="";
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),false));
        for(int i=s.size()-1;i>=0;--i){
            for(int j=i;j<s.size();++j){
                if(s[i]==s[j] and (j-i<=2 or dp[i+1][j-1]))dp[i][j]=true;
                if(dp[i][j]){
                    if(max_len<j-i+1){
                        ans = s.substr(i,j-i+1);
                        max_len = j-i+1;
                    }
                }
            }
        }
        return ans;
    }
};
