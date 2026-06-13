class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>us;
        for(int &x:nums) us.insert(x);
        int ans =0;
        for(auto &x:us){
            if(us.find(x-1)==us.end()){
                int temp_cnt = 1;
                int num = x;
                while(us.find(num +1)!=us.end()){
                    ++num;
                    ++temp_cnt;
                }
                ans = max(ans,temp_cnt);
            }
        }
        return ans;
    }
};
