class Solution {
public:
    unordered_map<int,int>ump;
    int coinChange(vector<int>& coins, int amount) {
        if(amount ==0) return 0;
        if(ump.find(amount)!=ump.end()) return ump[amount];
        int ans = 1e6;
        for(int &x:coins){
            if(x<=amount){
                int temp_ans = coinChange(coins,amount-x);
                if(temp_ans!=-1) ans = min(ans,temp_ans+1);
            }
        }
        // cout<<amount<<" "<<ans<<endl;
        if(ans!=1e6) ump[amount]=ans;
        else ump[amount] =-1;
        return ump[amount];
    }
};
