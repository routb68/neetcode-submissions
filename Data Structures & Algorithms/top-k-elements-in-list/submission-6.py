class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        frq_dict = defaultdict(int)
        for x in nums:
            frq_dict[x]+=1
        return [k for k,v in sorted(frq_dict.items(),key= lambda x:x[1], reverse=True)[:k]]