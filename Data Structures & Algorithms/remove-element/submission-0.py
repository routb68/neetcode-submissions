class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        low = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[low] = nums[i]
                low +=1
        return low