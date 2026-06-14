class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_set<char>us;
        int lo=0,hi=0;
        while(hi<s.size()){
            while(us.find(s[hi])!=us.end()){
                us.erase(s[lo]); ++lo;
            }
            us.insert(s[hi]);
            ans = max(ans,hi-lo+1);
            ++hi;
        }
        return ans;
    }
};
