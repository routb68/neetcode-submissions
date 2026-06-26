class Solution {
public:
    vector<string>ans;
    vector<string> dc = {"", "", "abc", "def", "ghi", "jkl",
                                  "mno", "qprs", "tuv", "wxyz"};
    void dfs(string& di, int idx, string &s){
        if(idx==di.size()){
            ans.emplace_back(s);
            return;
        }
        for(char &x:dc[di[idx]-'0']){
            s+=x;
            dfs(di,idx+1,s);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string di) {
        ans.clear();
        if(di.size()==0) return ans;
        string s;
        dfs(di,0,s);
        return ans;
    }
};
