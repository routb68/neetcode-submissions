class Solution {
   public:
    int dfs(vector<int> &nums, int lidx, int ridx, vector<vector<int>>& dp) {
        if (ridx < lidx) return 0;
        if (dp[lidx][ridx] != -1) return dp[lidx][ridx];

        dp[lidx][ridx] = 0;
        for (int i = lidx; i <= ridx; ++i) {
            int temp_coins = nums[lidx-1] * nums[i] * nums[ridx+1];
            temp_coins += (dfs(nums, lidx, i - 1, dp) + dfs(nums, i + 1, ridx, dp));
            dp[lidx][ridx] = max(dp[lidx][ridx], temp_coins);
        }
        return dp[lidx][ridx];
    }
    int maxCoins(vector<int>& nums) {
        nums.push_back(1);
        nums.insert(nums.begin(), 1);
        vector<vector<int>> dp(nums.size() + 2, vector<int>(nums.size() + 2, -1));
        return dfs(nums, 1, nums.size()-2, dp);
    }
};
