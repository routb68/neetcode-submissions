class Solution {
public:
    bool checkPalindrome(string &s,int lidx,int ridx){
        while(ridx>=lidx){
            if(s[lidx]!=s[ridx])return false;
            ++lidx; --ridx;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans_s;
        int ans =0;
        for(int i=0;i<s.size();++i){
            for(int j=i;j<s.size();++j){
                if(checkPalindrome(s,i,j)){
                    // cout<<i<<' '<<j<<endl;
                    if(ans<j-i+1){
                        ans = j-i+1;
                        ans_s = s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans_s;
    }
};
