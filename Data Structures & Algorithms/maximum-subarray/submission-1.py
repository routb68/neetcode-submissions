class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans, temp_ans = -1e10, 0
        for i in range(len(nums)):
            temp_ans += nums[i]
            ans = max(ans, temp_ans)
            temp_ans = max(temp_ans,0)
        return ans