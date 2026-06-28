class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.emplace_back(intervals[0]);
        for(auto & interval:intervals){
            int start = interval[0],end = interval[1];
            int last_end = ans.back()[1];
            if(start<=last_end){
                ans.back()[1] = max(last_end,end);
            }else{
                ans.emplace_back(interval);
            }
        }
        return ans;
    }
};
