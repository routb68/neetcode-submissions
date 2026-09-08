class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        pnums = [ [nums[i],i] for i in range(len(nums))]
        pnums.sort()
        low, high = 0, len(nums)-1
        while low < high:
            if pnums[low][0] + pnums[high][0] == target:
                return sorted([pnums[low][1],pnums[high][1]])
            elif pnums[low][0] + pnums[high][0] > target:
                high -=1
            else :
                low +=1
        return []