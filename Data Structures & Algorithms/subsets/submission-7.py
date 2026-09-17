class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans = []
        for i in range((1<<len(nums))):
            temp_ans = []
            for j in range(len(nums)):
                if i & (1<<j) :
                    temp_ans.append(nums[j])
            ans.append(temp_ans)
        return ans