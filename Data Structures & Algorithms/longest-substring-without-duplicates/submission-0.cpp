class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        for(int i=0;i<s.size();++i){
            unordered_set<char>us;
            us.insert(s[i]);
            for(int j=i+1;j<s.size();++j){
                if(us.find(s[j])!=us.end()) break;
                us.insert(s[j]);
            }
            int sz = us.size();
            ans = max(ans,sz);
        }
        return ans;
    }
};
