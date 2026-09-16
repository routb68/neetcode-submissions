class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        frq_nums = defaultdict(int)
        for x in nums:
            frq_nums[x]+=1

        ans = set()

        for i in range(len(nums)):
            frq_nums[nums[i]]-=1
            for j in range(i+1,len(nums)):
                frq_nums[nums[j]]-=1

                int_req = - (nums[i]+nums[j])
                if frq_nums[int_req] >0:
                    ans.add(tuple(sorted([nums[i],nums[j], int_req])))

                frq_nums[nums[j]]+=1
            
            frq_nums[nums[i]]+=1
        
        return list(list(_) for _ in ans)
