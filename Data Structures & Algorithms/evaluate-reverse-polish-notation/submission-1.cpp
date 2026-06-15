class Solution {
public:
    int evalRPN(vector<string>& tks) {
        stack<string>st;
        for(string &x:tks){
            if(x =="+"){
                int a = stoi(st.top()); st.pop();
                int b = stoi(st.top()); st.pop();
                st.push(to_string(a+b));
            } else if(x =="-"){
                int a = stoi(st.top()); st.pop();
                int b = stoi(st.top()); st.pop();
                st.push(to_string(b-a));
            } else if(x =="*"){
                int a = stoi(st.top()); st.pop();
                int b = stoi(st.top()); st.pop();
                st.push(to_string(a*b));
            }else if(x =="/"){
                int a = stoi(st.top()); st.pop();
                int b = stoi(st.top()); st.pop();
                st.push(to_string(b/a));
            }else {
                st.push(x);
            }
        }
        return stoi(st.top());
    }
};
