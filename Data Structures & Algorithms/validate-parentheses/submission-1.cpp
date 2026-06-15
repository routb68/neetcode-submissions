class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char &x:s){
            if(x=='}'){
                if(st.size()==0 or st.top()!='{') return false;
                st.pop();
            }else if (x==')'){
                if(st.size()==0 or st.top()!='(') return false;
                st.pop();
            }else if (x==']'){
                if(st.size()==0 or st.top()!='[') return false;
                st.pop();
            }else{
                st.push(x);
            }
        }
        return st.size()==0;
    }
};
