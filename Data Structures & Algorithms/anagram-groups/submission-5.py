class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ans = defaultdict(list)
        for x in strs:
            ans["".join(sorted(x))].append(x)
        return list(ans.values())
