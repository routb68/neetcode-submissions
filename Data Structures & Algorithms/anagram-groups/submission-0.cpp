class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ump;
        for(string &s :strs){
            string s_1 = s;
            sort(s_1.begin(),s_1.end());
            ump[s_1].emplace_back(s);
        }
        vector<vector<string>>ans;
        for(auto&[str,vec]:ump){
            ans.emplace_back(vec);
        }
        return ans;
    }
};
