class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        pair_nums = [ (nums[i],i) for i in range(len(nums))]
        pair_nums.sort()
        low,high = 0, len(nums)-1
        while low < high:
            if pair_nums[low][0] + pair_nums[high][0] == target:
                return [min(pair_nums[low][1], pair_nums[high][1]),max(pair_nums[low][1], pair_nums[high][1])]
            elif pair_nums[low][0] + pair_nums[high][0] > target:
                high -=1
            else :
                low +=1
        return []