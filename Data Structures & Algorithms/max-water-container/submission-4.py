class Solution:
    def maxArea(self, nums: List[int]) -> int:
        low, high = 0, len(nums)-1
        ans = 0
        while low <high:
            ans = max(ans, min(nums[low],nums[high])*(high-low))
            if nums[low] < nums[high]:
                low +=1
            else :
                high -=1
        return ans