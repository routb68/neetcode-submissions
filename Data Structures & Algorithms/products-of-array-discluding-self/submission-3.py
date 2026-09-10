class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l_prod = [1]
        for i in range(1,len(nums)):
            l_prod.append(l_prod[-1]*nums[i-1])
        
        r_prod = [1]
        for i in reversed(range(0,len(nums)-1)):
            r_prod.append(r_prod[-1]*nums[i+1])
        
        r_prod.reverse()

        # print(l_prod)
        # print(r_prod)

        ans = []
        for i in range(len(nums)):
            ans.append(l_prod[i]*r_prod[i])
        
        return ans 