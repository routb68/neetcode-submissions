class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        low, high = 1, max(piles)

        def check(speed):
            time = 0
            for pile in piles:
                time += (pile//speed)
                if pile %speed:
                    time +=1
            return time <=h

        while low<high:
            mid = (high+low)//2
            if check(mid):
                high = mid
            else :
                low = mid+1
        return low