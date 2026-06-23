class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans =INT_MIN;
        int temp_sum =0;
        for(int &x:nums){
            temp_sum +=x;
            ans = max(ans,temp_sum);
            temp_sum = max(temp_sum,0);
        }
        return ans;
    }
};
