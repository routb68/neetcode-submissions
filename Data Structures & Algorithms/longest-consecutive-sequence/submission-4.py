class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        ans, temp_ans, nums_set = 0,0, set(nums)
        for x in nums_set:
            if x+1 not in nums_set:
                temp_num, temp_ans = x, 1
                while temp_num -1 in nums_set:
                    temp_num -=1
                    temp_ans += 1
                ans = max(ans, temp_ans)
        return ans
