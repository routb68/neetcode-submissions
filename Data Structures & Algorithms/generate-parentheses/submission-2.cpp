class Solution {
public:
    vector<string>ans;
    void backtrack(string s, int ocnt, int ccnt, int n){
        if(ocnt+ccnt==n+n){
            ans.emplace_back(s);
            return;
        }
        if(ocnt<n)backtrack(s+'(',ocnt+1,ccnt,n);
        if(ccnt<ocnt) backtrack(s+')',ocnt,ccnt+1,n);
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        backtrack("",0,0,n);
        return ans;
    }
};
