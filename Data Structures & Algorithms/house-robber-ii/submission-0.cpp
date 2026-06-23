class Solution {
   public:
    int robRun(vector<int>& nums, int lidx, int ridx) {
        if (ridx - lidx <= 1) return max(nums[lidx], nums[ridx]);

        vector<int> dp(ridx - lidx + 1);
        dp[0] = nums[lidx], dp[1] = max(nums[lidx], nums[lidx + 1]);

        for (int i = 2; i < dp.size(); ++i) {
            dp[i] = max(nums[i+lidx] + dp[i - 2], dp[i - 1]);
        }
        return dp.back();
    }
    int rob(vector<int>& nums) {
        if (nums.size() <= 2) return *max_element(nums.begin(), nums.end());
        return max(robRun(nums, 0, nums.size() - 2), robRun(nums, 1, nums.size() - 1));
    }
};
