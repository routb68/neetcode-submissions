class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        frq_s1 = defaultdict(int)
        for c in s1:
            frq_s1[c]+=1
        
        unique_char_s1 = len(frq_s1)
        for i in range(len(s2)):
            frq_s2 = defaultdict(int)
            curr =0
            for j in range(i,len(s2)):
                frq_s2[s2[j]]+=1
                if frq_s2[s2[j]] > frq_s1[s2[j]]:
                    break
                if frq_s2[s2[j]] == frq_s1[s2[j]] :
                    curr +=1
                if curr == unique_char_s1:
                    return True
        return False
            