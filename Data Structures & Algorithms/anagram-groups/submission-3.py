class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = {}
        for s in strs:
            frq = [0]*26
            for char in s:
                frq[ord(char)-ord('a')] += 1
            if tuple(frq) in res:
                res[tuple(frq)].append(s)
            else:
                res[tuple(frq)]=[s]
        ans = []
        for k,v in res.items():
            ans.append(v)
        return ans