import copy
class Solution:
    ans = set()
    def go(self, nums, temp_nums,idx):
        if idx==len(nums):
            self.ans.add(copy.copy(tuple(temp_nums)))
            return 
        temp_nums.append(nums[idx])
        self.go(nums,temp_nums,idx+1)
        temp_nums.pop()
        while idx+1<len(nums) and nums[idx]==nums[idx+1]:
            idx +=1
        self.go(nums,temp_nums,idx+1)

    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        self.ans = set()
        nums.sort()
        self.go(nums,[],0)
        return [list(x) for x in self.ans]