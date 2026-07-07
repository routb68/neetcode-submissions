class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums)<3:
            return max(nums)
        n = len(nums)
        dp = [0 for _ in range(n)]

        dp[0], dp[1] = nums[0], max(nums[0], nums[1])

        for i in range(2,n):
            dp[i] = max(dp[i-1], dp[i-2]+nums[i])
        
        return dp[n-1]