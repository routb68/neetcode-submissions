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
    void dfs(string &s, vector<string>&temp_ans, int idx){
        if(idx==s.size()){
            ans.emplace_back(temp_ans);
            return ;
        }
        for(int i=idx;i<s.size();++i){
            if(ispali(s,idx,i)){
                temp_ans.emplace_back(s.substr(idx,i-idx+1));
                dfs(s,temp_ans,i+1);
                temp_ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp_ans;
        ans.clear();
        dfs(s,temp_ans,0);
        return ans;
    }
};
