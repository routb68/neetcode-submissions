class Solution {
public:
    vector<string>ans;
    bool isvalid(string s){
        int cnt =0;
        for(char &x:s){
            if(x=='(')++cnt;
            else --cnt;
            if(cnt<0) return false;
        }
        return cnt==0;
    }
    void go(string s,int n){
        if(s.size()==2*n){
            if(isvalid(s))ans.push_back(s);
            return;
        }
        go(s+'(',n);
        go(s+')',n);
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        go("",n);
        return ans;
    }
};
