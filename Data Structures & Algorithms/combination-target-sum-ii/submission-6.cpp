class Solution {
public:
    set<vector<int>>us;
    void go(vector<int>&cs,int idx, int tar,vector<int>&temp){
        // cout<<tar<<" "<<idx<<endl;
        if(tar==0){
            us.insert(temp);
            return;
        }
        if(idx==cs.size() or tar<0) return;
        temp.push_back(cs[idx]);
        go(cs,idx+1,tar-cs[idx],temp);
        temp.pop_back();
        while(idx+1<cs.size() and cs[idx]==cs[idx+1])++idx;
        go(cs,idx+1,tar,temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& cs, int tar) {
        us.clear();
        sort(cs.begin(),cs.end());
        vector<int>temp;
        go(cs,0,tar,temp);
        return vector<vector<int>>(us.begin(),us.end());
    }
};
