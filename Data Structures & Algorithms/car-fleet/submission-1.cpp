class Solution {
public:
    int carFleet(int tar, vector<int>& pos, vector<int>& spd) {
        vector<pair<int,int>>pos_spd;
        for(int i=0;i<pos.size();++i){
            pos_spd.emplace_back(pos[i],spd[i]);
        }
        sort(pos_spd.begin(),pos_spd.end(),greater<pair<int,int>>());

        stack<double>st;
        for(auto &x:pos_spd){
            int dis = tar-x.first;
            double t = ((double)dis/x.second);
            if(st.size() and st.top()>=t){
            }
            else st.push(t);
        }
        return st.size();
    }
};
