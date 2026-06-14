class Solution {
public:
    bool isPalindrome(string s) {
        string s_1 ;
        for(char &x:s){
            if(isalnum(x)) s_1 += tolower(x);
        }
        int low=0,high = s_1.size()-1;
        while(low<high){
            if(s_1[low]!=s_1[high]) return false;
            ++low;
            --high;
        }
        return true;
    }
};
