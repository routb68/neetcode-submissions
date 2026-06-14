class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if(nums[i]>0) break;
            if (i > 0 and nums[i] == nums[i - 1]) continue;
            int low = i + 1, high = nums.size() - 1;
            while (low < high) {
                if (nums[i] + nums[low] + nums[high] == 0) {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    ++low;
                    --high;
                    while (high > low and nums[high] == nums[high + 1]) --high;
                    while (low < high and nums[low] == nums[low - 1]) ++low;
                } else if (nums[i] + nums[low] + nums[high] > 0) {
                    --high;
                } else if (nums[i] + nums[low] + nums[high] < 0) {
                    ++low;
                }
            }
        }
        return ans;
    }
};
