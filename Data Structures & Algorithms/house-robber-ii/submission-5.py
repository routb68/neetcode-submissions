class Solution:
    def rob_part(self, nums, lidx, ridx):
        if ridx-lidx+1<3:
            return max(nums[lidx:ridx+1])
        n = ridx-lidx+1
        dp = [0 for _ in range(n)]
        for i in range(lidx,ridx+1):
            dp[i-lidx] = max(dp[i-1-lidx], dp[i-2-lidx]+nums[i])

        return dp[n-1]

    def rob(self, nums: List[int]) -> int:
        if len(nums) <3:
            return max(nums)
        return max(self.rob_part(nums,0, len(nums)-2), self.rob_part(nums,1,len(nums)-1))