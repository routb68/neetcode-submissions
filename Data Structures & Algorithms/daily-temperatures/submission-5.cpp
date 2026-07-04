class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>st;
        vector<int>ans(temp.size());
        for(int i=0;i<temp.size();++i){
            while(st.size() and st.top().first<temp[i]){
                auto temp_idx = st.top();
                st.pop();
                ans[temp_idx.second] = i- temp_idx.second;
            }
            st.push({temp[i],i});
        }
        return ans;
    }
};
