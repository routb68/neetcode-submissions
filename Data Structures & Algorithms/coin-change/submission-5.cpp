class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        dp[0]=0;
        for(int i=1;i<=amount;++i){
            int curr_coin =INT_MAX;
            for(int j=0;j<coins.size();++j){
                if(coins[j]<=i and dp[i-coins[j]]!=-1){
                    curr_coin = min(curr_coin, 1+dp[i-coins[j]]);
                }
            }
            if(curr_coin!=INT_MAX) dp[i]=curr_coin;
            // cout<<i<<" "<<dp[i]<<endl;
        }
        return dp[amount];
    }
};
