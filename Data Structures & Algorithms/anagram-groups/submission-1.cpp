class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ump;
        for(string &s :strs){
            vector<int>frq(26,0);
            for(char &x:s){
                ++frq[x-'a'];
            }
            string temp_str;
            for(int &x:frq){
                temp_str += ','+ to_string(x);
            }
            ump[temp_str].emplace_back(s);
        }
        vector<vector<string>>ans;
        for(auto&[str,vec]:ump){
            ans.emplace_back(vec);
        }
        return ans;
    }
};
