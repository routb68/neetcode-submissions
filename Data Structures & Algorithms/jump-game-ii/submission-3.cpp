class Solution {
public:
    unordered_map<int,int>ump;
    int go(vector<int>&nums,int idx){
        if(idx==nums.size()-1) return 0;
        if(nums[idx]==0) return INT_MAX-100;
        if(ump.find(idx)!=ump.end()) return ump[idx];
        int ans = INT_MAX;
        int n = min((int)nums.size()-1, idx+nums[idx]);
        for(int i=idx+1;i<=n;++i){
            ans = min(ans, 1+go(nums,i));
        }
        ump[idx]= ans;
        return ump[idx];
    }
    int jump(vector<int>& nums) {
        return go(nums,0);
    }
};
