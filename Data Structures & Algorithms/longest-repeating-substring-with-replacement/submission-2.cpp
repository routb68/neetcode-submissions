class Solution {
   public:
    int characterReplacement(string s, int k) {
        int ans = 0, low = 0;
        unordered_map<char, int> ump;
        int max_frq =0;
        for (int high = 0; high < s.size(); ++high) {
            ++ump[s[high]];
            max_frq = max(max_frq,ump[s[high]]);
            while(high-low+1-max_frq >k){
                --ump[s[low]];
                ++low;
            }
            ans = max(ans,high-low+1);
        }
        return ans;
    }
};
