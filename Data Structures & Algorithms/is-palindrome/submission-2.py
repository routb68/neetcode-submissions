class Solution:
    def isPalindrome(self, s: str) -> bool:
        clean_s = "".join(_.lower() for _ in s if _.isalnum())
        low, high = 0, len(clean_s)-1
        while low<high:
            if clean_s[low]!=clean_s[high]:
                return False
            low +=1
            high -=1
        return True