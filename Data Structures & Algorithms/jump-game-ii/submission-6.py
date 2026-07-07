class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums)<2:
            return 0
        lidx, ridx = 0,0
        min_jump =0
        while True:
            max_reach = -1
            min_jump+=1
            for i in range(lidx,ridx+1):
                max_reach = max(max_reach, nums[i]+i)

            if(max_reach>=len(nums)-1):
                return min_jump
            lidx, ridx = ridx+1, max_reach
        return -1
            
