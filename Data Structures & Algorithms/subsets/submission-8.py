import copy
class Solution:
    def generate(self, nums, idx, temp_nums):
        if idx == len(nums):
            self.ans.append(copy.deepcopy(temp_nums))
            return
        temp_nums.append(nums[idx])
        self.generate(nums,idx+1,temp_nums)
        temp_nums.pop()
        self.generate(nums,idx+1,temp_nums)

    def subsets(self, nums: List[int]) -> List[List[int]]:
        self.ans = []
        self.generate(nums,0,[])
        return self.ans