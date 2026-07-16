class Solution:
    def findMin(self, nums: List[int]) -> int:
        if len(nums)==1 or nums[-1] > nums[0]:
            return nums[0]
        low, high = 0, len(nums)-1
        while low<high:
            mid = (low+high)//2
            if nums[mid] >nums[-1]:
                low = mid+1
            else :
                high = mid
        return nums[low]