class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        int cnt1[26],cnt2[26];
        for(int i=0;i<26;++i){
            cnt1[i]=0;cnt2[i]=0;
        }

        for(char &x:s1) ++cnt1[x-'a'];
        int low=0;
        for(int i=0;i<s2.size();++i){
            if(i-low+1<s1.size()){
                ++cnt2[s2[i]-'a'];
            }else{
                ++cnt2[s2[i]-'a'];
                bool flag = true;
                for(int j=0;j<26;++j){
                    if(cnt1[j]!=cnt2[j]) flag = false;
                }
                if(flag) return true;
                --cnt2[s2[low]-'a'];
                ++low;
            }
        }
        return false;
    }
};
