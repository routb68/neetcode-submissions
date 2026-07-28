class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ans, cnt = nums[0], 0
        for x in nums:
            if x==ans:
                cnt += 1
            else :
                cnt -=1
                if cnt ==0:
                    ans = x
                    cnt = 1
        return ans