class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>us;
        for(int &x:nums)us.insert(x);
        int ans =0;
        for(int i=0;i<nums.size();++i){
            if(us.find(nums[i]-1)==us.end()){
                int x = nums[i], temp_ans =1;
                while(us.find(x+1)!=us.end()){
                    ++temp_ans;
                    ++x;
                }
                ans = max(ans, temp_ans);
            }
        }
        return ans;
    }
};
