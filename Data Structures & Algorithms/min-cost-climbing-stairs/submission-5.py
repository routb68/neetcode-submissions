class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        if len(cost) == 2:
            return min(cost[1],cost[0])

        n = len(cost)
        dp = [0 for i in range(n+1)]
        # dp[0], dp[1] = cost[0], min(cost[0],cost[1])

        for i in range(2,n+1):
            dp[i] = min(cost[i-1]+dp[i-1], cost[i-2]+dp[i-2])
        
        return dp[n]