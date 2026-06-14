class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char,int>us;
        int lo=0,hi=0;
        while(hi<s.size()){
            if(us.find(s[hi])!=us.end()){
                lo = max(lo,us[s[hi]]+1);
            }
            us[s[hi]]=hi;
            ans = max(ans,hi-lo+1);
            ++hi;
        }
        return ans;
    }
};
