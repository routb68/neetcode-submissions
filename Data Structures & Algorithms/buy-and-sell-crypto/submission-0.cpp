class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0, curr_low = prices[0];
        for(int i=1;i<prices.size();++i){
            ans = max(ans, prices[i]-curr_low);
            curr_low = min(curr_low,prices[i]);
        }
        return ans;
    }
};
