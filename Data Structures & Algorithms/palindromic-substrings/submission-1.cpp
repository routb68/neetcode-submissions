class Solution {
public:
    int countPalindrome(string &s,int lidx, int ridx){
        int temp_ans =0;
        while(lidx>=0 and ridx<=s.size()-1){
            if(s[lidx]==s[ridx])++temp_ans;
            else break;
            --lidx;++ridx;
        }
        return temp_ans;
    }
    int countSubstrings(string s) {
        int ans =0;
        for(int i=0;i<s.size();++i){
            ans += countPalindrome(s,i,i);
            ans += countPalindrome(s,i,i+1);
        }
        return ans;
    }
};
