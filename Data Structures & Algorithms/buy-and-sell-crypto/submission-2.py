class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans, min_now = 0, 1e5
        for x in prices:
            ans = max(ans, x- min_now)
            min_now = min (x, min_now)
        return ans