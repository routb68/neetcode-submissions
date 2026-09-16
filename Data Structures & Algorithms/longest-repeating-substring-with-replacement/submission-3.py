class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        ans, charSet = 0, set(s)

        for c in charSet:
            l =0
            charCount = 0
            for r in range(len(s)):
                if s[r]==c:
                    charCount +=1
                while r-l+1 - charCount >k:
                    if s[l]==c:
                        charCount -= 1
                    l += 1
                # print(c, l, r, charCount)
                ans = max(ans, r-l+1)
        return ans