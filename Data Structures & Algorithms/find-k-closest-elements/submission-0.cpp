class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int idx = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=idx;i<min(idx+k,(int)arr.size());++i){
            pq.push({abs(arr[i]-x),arr[i]});
        }
        for(int i=idx-1;i>=max(0,idx-k);--i){
            pq.push({abs(arr[i]-x),arr[i]});
        }
        vector<int>ans;
        for(int i=0;i<k;++i){
            auto x=pq.top();pq.pop();
            ans.emplace_back(x.second);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};