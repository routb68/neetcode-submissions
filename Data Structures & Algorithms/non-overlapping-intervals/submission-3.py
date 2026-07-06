class Solution:
    def dfs(self, intervals, cidx,lidx):
        if cidx==len(intervals):
            return 0
        ans = self.dfs(intervals,cidx+1, lidx)
        if lidx==-1 or intervals[cidx][0] >=intervals[lidx][1]:
            ans = max(ans, 1 + self.dfs(intervals,cidx+1,cidx))

        return ans 


    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort()
        return len(intervals) - self.dfs(intervals,0,-1)