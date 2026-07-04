class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& spd) {
        vector<pair<int,int>>temp;
        for(int i=0;i<pos.size();++i){
            temp.emplace_back(pos[i],spd[i]);
        }
        sort(temp.begin(),temp.end());
        stack<double>st;
        for(int i=0;i<temp.size();++i){
            double tm = (double)(target-temp[i].first) / (temp[i].second);
            while(st.size() and (st.top()<=tm))st.pop();
            st.push(tm);
            // cout<<tm<<endl;
        }
        return st.size();
    }
};
