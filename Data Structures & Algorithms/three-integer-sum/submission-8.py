class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        frq_dict = defaultdict(int)
        for x in nums:
            frq_dict[x]+=1

        ans = set()

        for i in range(len(nums)):
            frq_dict[nums[i]]-=1
            for j in range(i+1,len(nums)):
                frq_dict[nums[j]]-=1
                req_int = - (nums[j]+nums[i])
                if frq_dict[req_int] >0:
                    ans.add(tuple(sorted([nums[i],nums[j],req_int])))
                frq_dict[nums[j]]+=1
            frq_dict[nums[i]]+=1

        return list(list(_) for _ in ans)