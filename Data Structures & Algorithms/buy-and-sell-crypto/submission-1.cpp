class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans = 0;
        int curr_low=nums[0];   
        for(int i=1;i<nums.size();++i){
            ans = max(ans, nums[i]-curr_low);
            curr_low= min(curr_low,nums[i]);
        }
        return ans;
    }
};
