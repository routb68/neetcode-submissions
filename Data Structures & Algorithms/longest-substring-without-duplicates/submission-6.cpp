class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>ump;
        int ans =0;
        int low=0,high=0;
        while(high<s.size()){
            while(ump[s[high]]!=0){
                --ump[s[low]];
                ++low;
            }
            ++ump[s[high]];
            ++high;
            ans = max(ans,high-low);
        }
        return ans;
    }
};
