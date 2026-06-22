class Solution {
   public:
    unordered_map<int, int> ump;
    int climbStairs(int n) {
        if (n < 3) return n;
        if (ump.find(n) == ump.end()) ump[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return ump[n];
    }
};
