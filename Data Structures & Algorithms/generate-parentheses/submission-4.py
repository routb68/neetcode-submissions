import copy
class Solution:
    def go(self,s, lidx,ridx,n):
        if len(s)==2*n and lidx ==n and ridx==n:
            self.ans.append(copy.deepcopy(s))
            return 

        if lidx <n:
            self.go(s+'(',lidx+1,ridx,n)
        if ridx <lidx:
            self.go(s+')',lidx,ridx+1,n)
        
    def generateParenthesis(self, n: int) -> List[str]:
        self.ans = []
        self.go("", 0, 0, n)
        return self.ans