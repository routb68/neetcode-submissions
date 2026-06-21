class Solution {
public:
    bool isValid(string s){
        int open =0;
        for(char& x:s){
            if(x=='(') ++open;
            else --open;
            if(open<0) return false;
        }
        return open==0;
    }
    void generateString(string s, vector<string>&ans,int n){
        if(s.size()==2*n){
            if(isValid(s)) ans.emplace_back(s);
            return;
        }
        generateString(s+'(',ans,n);
        generateString(s+')',ans,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        // string s;
        generateString("",ans,n);
        return ans;
    }
};
