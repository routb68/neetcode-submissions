class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ans = set()
        nums.sort()
        for i in range(1<<len(nums)):
            temp_ans=[]
            for j in range(len(nums)):
                if i & (1<<j):
                    temp_ans.append(nums[j])
            ans.add(tuple(temp_ans))
        return list(list(_) for _ in ans)