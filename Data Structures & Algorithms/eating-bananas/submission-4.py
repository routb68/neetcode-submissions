class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def go(mid):
            needed_time = 0
            for x in piles:
                needed_time += (x//mid)
                if x%mid:
                    needed_time +=1
            return needed_time <=h
        low, high = 1, max(piles)
        while low < high:
            mid = low + (high-low)//2
            if (go(mid)):
                high = mid
            else :
                low = mid+1
        return low