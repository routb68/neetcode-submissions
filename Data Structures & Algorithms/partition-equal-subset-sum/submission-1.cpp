class Solution {
   public:
    map<pair<int, int>, bool> mp;
    bool dfs(vector<int>& nums, int idx, int sum_t, int sum_c) {
        if (idx == nums.size()) {
            if (sum_c + sum_c == sum_t) return true;
            return false;
        }
        if (mp.find({idx, sum_c}) == mp.end())
            mp[{idx, sum_c}] =
                (dfs(nums, idx + 1, sum_t, sum_c + nums[idx]) or dfs(nums, idx + 1, sum_t, sum_c));
        return mp[{idx, sum_c}];
    }
    bool canPartition(vector<int>& nums) {
        int sum_t = accumulate(nums.begin(), nums.end(), 0);
        if (sum_t % 2) return false;
        return dfs(nums, 0, sum_t, 0);
    }
};
