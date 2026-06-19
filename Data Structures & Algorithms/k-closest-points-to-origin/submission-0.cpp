class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,int>, 
                        vector<pair<double,int>>,
                        greater<pair<double,int>>>pq;
        for(int i=0;i<points.size();++i){
            double x=points[i][0],y = points[i][1];
            pq.push({sqrt((x*x) + (y*y)), i});
        }
        vector<vector<int>>ans;
        for(int i =0;i<k;++i){
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        return ans;
    }
};
