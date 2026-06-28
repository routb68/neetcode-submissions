class Solution {
public:
    map<pair<int,int>,int>mp;
    int dfs(vector<vector<int>>&intervals, int cidx, int lidx){
        if(cidx==intervals.size()) return 0;
        if(mp.find({cidx,lidx})!=mp.end()) return mp[{cidx,lidx}];
        int ans = 0;
        if(lidx==-1 or (intervals[lidx][1]<=intervals[cidx][0])){
            ans = 1+ dfs(intervals,cidx+1,cidx);
        }
        ans = max(ans, dfs(intervals,cidx+1,lidx));
        mp[{cidx,lidx}]= ans;
        return mp[{cidx,lidx}];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        return intervals.size() - dfs(intervals,0, -1);
    }
};
