class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre_fix, suff_fix = [1], [1]

        for i in range(1,len(nums)):
            pre_fix.append(pre_fix[-1]*nums[i-1])
        
        for i in reversed(range(0,len(nums)-1)):
            suff_fix.append(suff_fix[-1]*nums[i+1])
        
        suff_fix.reverse()
        ans = []
        
        for i in range(len(nums)):
            ans.append(pre_fix[i]*suff_fix[i])

        return ans