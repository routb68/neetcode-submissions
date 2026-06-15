class Solution {
public:
    int go(vector<string>&nums){
        string s = nums.back();
        nums.pop_back();
        if(s!="+" and s!="-" and s!="*" and s!="/") return stoi(s);
        int right = go(nums);
        int left = go(nums);
        if(s=="+") return left+right;
        else if (s=="-") return left-right;
        else if (s=="*") return left*right;
        return left/right;
    }
    int evalRPN(vector<string>& tokens) {
        return go(tokens);
    }
};
