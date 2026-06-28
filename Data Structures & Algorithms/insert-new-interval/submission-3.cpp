class Solution {
   public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int idx = 0;
        while (idx < intervals.size() and intervals[idx][1] < newInterval[0]) {
            ans.emplace_back(intervals[idx]);
            ++idx;
        }
        while (idx < intervals.size() and newInterval[1] >= intervals[idx][0]) {
            newInterval[0] = min(intervals[idx][0], newInterval[0]);
            newInterval[1] = max(intervals[idx][1], newInterval[1]);
            ++idx;
        }
        ans.emplace_back(newInterval);
        while (idx < intervals.size()) {
            ans.emplace_back(intervals[idx]);
            ++idx;
        }
        return ans;
    }
};
