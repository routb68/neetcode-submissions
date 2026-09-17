import copy
class Solution:
    def generate(self,nums,idx, target, temp_nums):
        if target==0:
            self.ans.append(copy.deepcopy(temp_nums))
            return 
        if target<0 or idx== len(nums):
            return 
        temp_nums.append(nums[idx])
        self.generate(nums,idx,target-nums[idx],temp_nums)
        temp_nums.pop()
        self.generate(nums,idx+1,target,temp_nums)

    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        self.ans = []
        self.generate(nums, 0, target, [])
        return self.ans