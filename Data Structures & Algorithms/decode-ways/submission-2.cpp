class Solution {
public:
unordered_map<int,int>ump;
    int go(string s, int idx){
        if(idx==s.size()) return 1;
        if(s[idx]=='0') return 0;

        if(ump.find(idx)!=ump.end()) return ump[idx];
        int ans = go(s,idx+1);
        if(idx+1<s.size() and ((s[idx]=='1' )or ( s[idx]=='2' and s[idx+1]<'7'))) ans +=go(s,idx+2);
        ump[idx]=ans;
        return ans;
    }
    int numDecodings(string s) {
        return go(s,0);
    }
};
