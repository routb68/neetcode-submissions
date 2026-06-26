class Solution {
public:
    vector<string>ans;
    vector<string> dc = {"", "", "abc", "def", "ghi", "jkl",
                                  "mno", "qprs", "tuv", "wxyz"};
    void dfs(string& di, int idx, string s){
        if(idx==di.size()){
            ans.emplace_back(s);
            return;
        }
        for(char &x:dc[di[idx]-'0']){
            dfs(di,idx+1,s+x);
        }
    }
    vector<string> letterCombinations(string di) {
        ans.clear();
        if(di.size()==0) return ans;
        dfs(di,0,"");
        return ans;
    }
};
