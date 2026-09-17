class Solution:
    def go(self,nums, temp_nums, vis):
        if len(nums)==len(temp_nums):
            self.ans.append(temp_nums.copy())
            return 
        for i in range(len(nums)):
            if vis[i]==False:
                vis[i]=True
                temp_nums.append(nums[i])
                self.go(nums,temp_nums,vis)
                temp_nums.pop()
                vis[i]=False
        
    def permute(self, nums: List[int]) -> List[List[int]]:
        self.ans = []
        self.go(nums, [], [ False for _ in range(len(nums))] )
        return self.ans