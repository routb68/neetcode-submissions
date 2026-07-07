import copy
class Solution:
    ans = []
    def go(self,s,lidx, ridx,n):
        if lidx==n and ridx==n:
            self.ans.append(copy.copy(s))
            return
        if ridx >lidx or lidx>n or ridx>n:
            return
        self.go(s+'(', lidx+1,ridx,n)
        self.go(s+')',lidx,ridx+1,n)

    def generateParenthesis(self, n: int) -> List[str]:
        self.ans = []
        self.go("",0,0,n)
        return self.ans