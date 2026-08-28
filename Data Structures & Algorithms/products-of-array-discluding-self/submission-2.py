class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre_mul, post_mul, temp = [0]*len(nums), [0]*len(nums), 1

        
        for i in range(len(nums)):
            pre_mul[i] = temp
            temp *= nums[i]
        
        temp =1
        for i in reversed(range(len(nums))):
            post_mul[i] = temp
            temp*= nums[i]

        ans = [0]*len(nums)
        for i in range(len(nums)):
            ans[i] = pre_mul[i]*post_mul[i]

        return ans