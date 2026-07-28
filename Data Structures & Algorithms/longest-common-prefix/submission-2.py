class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s = ""
        n = min(len(_) for _ in strs)
        for i in range(0,n):
            for j in range(1,len(strs)):
                if strs[0][i]!=strs[j][i]:
                    return s
            s+=strs[0][i]
        return s