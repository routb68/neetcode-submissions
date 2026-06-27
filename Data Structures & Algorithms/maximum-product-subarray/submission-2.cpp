class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curr_max=1, curr_min = 1;
        int ans=INT_MIN;
        for(int& x:nums){
            int temp = curr_max;
            curr_max = max({curr_max*x, curr_min*x, x});
            curr_min = min({temp*x, curr_min*x,x});
            ans = max(ans,curr_max);
        }
        return ans;
    }
};
