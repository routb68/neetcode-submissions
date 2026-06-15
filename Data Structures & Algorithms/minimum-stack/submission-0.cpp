class MinStack {
public:
    stack<int>st,min_st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size()){
            st.push(val);
            min_st.push(min(val,min_st.top()));
        }else{
            st.push(val);
            min_st.push(val);
        }
    }
    
    void pop() {
        st.pop();
        min_st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
