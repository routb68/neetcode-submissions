class Solution {
public:
    vector<vector<string>>ans;
    bool ispali(string &s, int l, int r){
        while(r>l){
            if(s[l]!=s[r]) return false;
            ++l;
            --r;
        }
        return true;
    }
    void dfs(string &s, vector<string>&temp_ans, int lidx, int cidx){
        if(cidx==s.size()){
            if(lidx==cidx) ans.emplace_back(temp_ans);
            return ;
        }
        if(ispali(s,lidx,cidx)){
            temp_ans.emplace_back(s.substr(lidx, cidx-lidx+1));
            dfs(s,temp_ans,cidx+1,cidx+1);
            temp_ans.pop_back();
        }
        dfs(s,temp_ans,lidx, cidx+1);
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp_ans;
        ans.clear();
        dfs(s,temp_ans,0,0);
        return ans;
    }
};
