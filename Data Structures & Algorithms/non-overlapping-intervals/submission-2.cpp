class Solution {
public:
    int dfs(vector<vector<int>>&intervals, int cidx,int lidx){
        if(cidx==intervals.size()) return 0;
        int ans =0;
        if(lidx==-1 or (intervals[cidx][0]>=intervals[lidx][1])){
            ans = 1+dfs(intervals,cidx+1,cidx);
        }
        ans = max(ans,dfs(intervals,cidx+1,lidx));
        return ans;
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        return intervals.size()-dfs(intervals,0,-1);
    }
};
