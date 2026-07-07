class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        if sum(gas)<sum(cost):
            return -1
        ans, tank_amount = 0,0
        for i in range(len(gas)):
            tank_amount += (gas[i]-cost[i])
            if(tank_amount<0):
                ans = i+1
                tank_amount = 0
        return ans