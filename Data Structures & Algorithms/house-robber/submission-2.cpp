class Solution {
   public:
    unordered_map<int, int> ump;
    int dfs(vector<int>& nums, int i) {
        if (i >= nums.size()) return 0;
        if (ump.find(i) == ump.end()) ump[i] = max(dfs(nums, i + 1), nums[i] + dfs(nums, i + 2));
        return ump[i];
    }
    int rob(vector<int>& nums) { return dfs(nums, 0); }
};
