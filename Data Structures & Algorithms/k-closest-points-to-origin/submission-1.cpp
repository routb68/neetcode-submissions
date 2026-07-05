class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>, vector<pair<double,int>>, greater<pair<double,int>> >pq;
        for(int i =0;i<points.size();++i){
            pq.push({sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]),i});
        }
        vector<vector<int>>ans;
        for(int i=0;i<k;++i){
            auto x = pq.top();pq.pop();
            ans.emplace_back(points[x.second]);
        }
        return ans;
    }
};
