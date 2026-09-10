class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums_set = set(nums)
        frq, res = 0,0

        for x in nums_set :
            if x+1 not in nums_set:
                temp = x
                frq = 1
                while temp-1 in nums_set:
                    temp -= 1
                    frq +=1
                res = max(res, frq)
        return res