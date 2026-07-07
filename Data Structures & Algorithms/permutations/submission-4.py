import copy
class Solution:
    ans = []
    def generate(self,nums, temp_nums, vis):
        if len(temp_nums)==len(nums):
            self.ans.append(copy.copy(temp_nums))
        for i in range(len(nums)):
            if vis[i]==False:
                vis[i] = True
                temp_nums.append(nums[i])
                self.generate(nums,temp_nums,vis)
                temp_nums.pop()
                vis[i]=False
        

    def permute(self, nums: List[int]) -> List[List[int]]:
        self.ans = []
        self.generate(nums,[],[False for _ in range(len(nums))])
        return self.ans