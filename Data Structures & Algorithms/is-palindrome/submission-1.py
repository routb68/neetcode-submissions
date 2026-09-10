class Solution:
    def isPalindrome(self, s: str) -> bool:
        s_clean = "".join(char for char in s if char.isalnum()).lower()
        low, high = 0, len(s_clean)-1
        while low <high:
            if s_clean[low] != s_clean[high]:
                return False
            low += 1
            high -= 1
        return True