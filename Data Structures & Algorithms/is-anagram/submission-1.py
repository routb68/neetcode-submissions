class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        str_s = [0 for _ in range(26)]
        str_t = [0 for _ in range(26)]

        for char in s:
            str_s[ord(char) - ord('a')] +=1
        
        for char in t:
            str_t[ord(char) - ord('a')] +=1

        for _ in range(26):
            if str_s[_] != str_t[_]:
                return False
        return True