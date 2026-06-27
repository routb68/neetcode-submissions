class Solution {
   public:
    unordered_map<int, int> ump;
    int coinChange(vector<int>& coins, int amount) {
        if (amount < 0) return -1;
        if (amount == 0) return 0;
        if (ump.find(amount) != ump.end()) return ump[amount];
        int ans = INT_MAX;
        for (int& x : coins) {
            if (amount < x) continue;
            int temp_ans = coinChange(coins, amount - x);
            if (temp_ans != -1) ans = min(ans, 1 + temp_ans);
        }
        if (ans == INT_MAX)
            ump[amount] = -1;
        else
            ump[amount] = ans;
        return ump[amount];
    }
};
