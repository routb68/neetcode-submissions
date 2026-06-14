class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>ump;
        for(char &x:s1)++ump[x];
        int count_char = ump.size();
        for(int i=0;i<s2.size();++i){
            unordered_map<char,int>ump1;
            int cnt =0;
            for(int j=i;j<s2.size();++j){
                ++ump1[s2[j]];
                if(ump[s2[j]] <ump1[s2[j]]) break;
                if(ump[s2[j]] ==ump1[s2[j]]) ++cnt;
                if(cnt==count_char) return true;
            }
        }
        return false;
    }
};
