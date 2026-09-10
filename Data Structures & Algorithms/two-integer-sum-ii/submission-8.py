class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(0, len(nums)):
            low, high =i+1, len(nums)-1
            while low <= high:
                mid = low + (high - low)//2
                if nums[mid]+nums[i]==target:
                    return [i+1, mid+1]
                elif nums[mid] +nums[i] >target:
                    high = mid-1
                else :
                    low = mid+1
        return []