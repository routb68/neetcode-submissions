class Solution {
public:
    string longestPalindrome(string s) {
        int max_len = 0;
        string ans ="";
        for(int i=0;i<s.size();++i){
            // odd len
            int l=i,r=i;
            while(l>=0 and r<s.size() and s[l]==s[r]){
                if(max_len<r-l+1){
                    max_len = r-l+1;
                    ans = s.substr(l,r-l+1);
                }
                --l;++r;
            }
            // even len
            l=i,r=i+1;
            while(l>=0 and r<s.size() and s[l]==s[r]){
                if(max_len<r-l+1){
                    max_len = r-l+1;
                    ans = s.substr(l,r-l+1);
                }
                --l;++r;
            }
        }
        return ans;
    }
};
