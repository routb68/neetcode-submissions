class Solution {
public:
    bool checkPalindrome(string& s, int lidx, int ridx){
        while(lidx<ridx){
            if(s[lidx]!=s[ridx])return false;
            ++lidx;--ridx;
        }
        return true;
    }
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size();++i){
            for(int j=i;j<s.size();++j){
                if(checkPalindrome(s,i,j))ans +=1;
            }
        } 
        return ans;
    }
};
