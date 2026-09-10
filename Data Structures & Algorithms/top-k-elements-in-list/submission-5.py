class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        frq = defaultdict(int)
        for x in nums:
            frq[x]+=1

        return [key for key, val in sorted(frq.items(), key = lambda x:x[1], reverse=True)[:k]]