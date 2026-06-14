class Solution {
public:
    int characterReplacement(string s, int k) {
       int ans =0;
       for(int i=0;i<s.size();++i){
        unordered_map<char,int>ump;
        int max_frq = 0;
        for(int j=i;j<s.size();++j){
            ++ump[s[j]];
            max_frq = max(max_frq, ump[s[j]]);
            if(j-i+1-max_frq <=k){
                ans = max(ans, j-i+1);
            }
        }
       } 
       return ans;
    }
};
