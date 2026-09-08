class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        frq_s, frq_t = [0]*26, [0]*26

        for char in s:
            frq_s[ord(char)-ord('a')] +=1
        
        for char in t:
            frq_t[ord(char)-ord('a')] +=1

        for i in range(26):
            if frq_s[i]!=frq_t[i]:
                return False

        return True