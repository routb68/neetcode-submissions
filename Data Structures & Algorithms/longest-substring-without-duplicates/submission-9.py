class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        frq_char = defaultdict(int)
        ans = 0
        low, high = 0, 0
        while high <len(s):
            while frq_char[s[high]]!=0 and low <high:
                # print(low, s[low])
                frq_char[s[low]] -= 1
                low +=1
            frq_char[s[high]]+=1
            high +=1
            ans = max(ans,high-low)

        return ans
