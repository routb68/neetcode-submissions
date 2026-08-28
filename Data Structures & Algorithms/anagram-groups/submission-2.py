class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        for s in strs:
            res_s = "".join(sorted(s))
            res[res_s].append(s)
        return list(res.values())