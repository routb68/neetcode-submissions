class Solution {
public:
    bool ispali(string& s,int lidx,int ridx){
        while(ridx>lidx){
            if(s[ridx]!=s[lidx])return false;
            --ridx;
            ++lidx;
        }
        return true;  
    }
    string longestPalindrome(string s) {
        int ans = 0;
        string ans_s;
        for(int i=0;i<s.size();++i){
            for(int j=i;j<s.size();++j){
                if(ispali(s,i,j)) {
                    if(ans<j-i+1){
                        ans_s = s.substr(i,j-i+1);
                        ans = j-i+1;
                    }
                }
            }
        }
        return ans_s;
    }
};
