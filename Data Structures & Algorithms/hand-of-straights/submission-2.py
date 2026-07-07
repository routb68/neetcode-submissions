class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        if len(hand) % groupSize !=0:
            return False
        ele_frq = {}
        for x in hand: 
            if x in ele_frq:
                ele_frq[x] +=1
            else :
                ele_frq[x] =1
        
        hand.sort()
        for x in hand:
            if ele_frq[x] >0:
                for i in range(x, x+groupSize):
                    if i not in ele_frq:
                        return False
                    if ele_frq[i]<=0:
                        return False
                    ele_frq[i] -=1
        return True