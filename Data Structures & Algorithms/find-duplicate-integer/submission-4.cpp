class Solution {
   public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for (int& x : nums) {
            if (us.find(x) != us.end()) return x;
            us.insert(x);
        }
        return -1;
    }
};
