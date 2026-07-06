class Solution:
    def insert(self, inter: List[List[int]], ninter: List[int]) -> List[List[int]]:

        ans, idx = [], 0
        while idx<len(inter) and inter[idx][1]< ninter[0]:
            ans.append(inter[idx])
            idx +=1 

        while idx<len(inter) and inter[idx][0]<=ninter[1]:
            ninter[0] = min(ninter[0], inter[idx][0])
            ninter[1] = max(ninter[1], inter[idx][1])
            idx +=1 

        ans.append(ninter)

        while idx <len(inter):
            ans.append(inter[idx])
            idx+=1
            
        return ans


        