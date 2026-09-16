class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        char_frq, ans, low, max_frq = defaultdict(int), 0, 0, 0
        for i in range(len(s)):
            char_frq[s[i]] +=1 
            max_frq = max(max_frq, char_frq[s[i]])

            while i-low+1-max_frq >k :
                char_frq[s[low]]-=1
                low +=1

            ans = max(ans, i-low+1)
        return ans
