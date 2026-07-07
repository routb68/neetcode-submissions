import copy
class Solution:
    ans = []
    def go(self,nums, temp_nums,idx, target):
        if target==0:
            self.ans.append(copy.copy(temp_nums))
            return 
        if target<0 or idx==len(nums):
            return 
        temp_nums.append(nums[idx])
        target-=nums[idx]
        self.go(nums,temp_nums,idx,target)

        target+= nums[idx]
        temp_nums.pop()
        self.go(nums,temp_nums,idx+1,target)
        
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        self.ans = []
        self.go(nums,[],0,target)
        return self.ans