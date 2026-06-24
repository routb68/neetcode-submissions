class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = INT_MIN;
        int currMax=1, currMin =1;
        for(int &x:nums){
            int temp = currMax*x;
            currMax = max({temp,currMin*x,x});
            currMin = min({temp,currMin*x,x});
            res = max(res, currMax);
        }
        return res;
    }
};
