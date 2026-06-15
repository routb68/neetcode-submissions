class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans(temp.size());
        stack<pair<int,int>>st;
        for(int i=0;i<temp.size();++i){
            while(st.size() and st.top().first <temp[i]){
                pair<int,int> x = st.top();
                st.pop();
                ans[x.second] = i-x.second;
            }
            st.push({temp[i],i});
        }
        return ans;
    }
};
