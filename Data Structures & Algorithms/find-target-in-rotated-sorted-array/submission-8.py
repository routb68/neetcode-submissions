class Solution:
    def minidx(self,nums):
        if nums[0] <nums[-1]:
            return 0
        low, high = 0, len(nums)-1
        while low <high:
            mid = low + (high-low)//2
            if nums[mid] <nums[-1]:
                high = mid
            else :
                low = mid +1
        return low
    def gosearch(self,nums,lidx,ridx,target):
        while lidx<=ridx:
            mid = lidx + (ridx-lidx)//2
            if nums[mid]==target:
                return mid
            elif nums[mid] > target:
                ridx = mid-1
            else :
                lidx = mid+1
        return -1

    def search(self, nums: List[int], target: int) -> int:
        min_idx = self.minidx(nums)

        if target <=nums[-1]:
            return self.gosearch(nums,min_idx,len(nums)-1,target)

        return self.gosearch(nums,0, min_idx-1,target)