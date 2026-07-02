class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>us;
        for(int &x:nums)us.insert(x);
        int ans=0;
        for(int &x:nums){
            if(us.find(x-1)!=us.end()) continue;
            else{
                int temp_num =x,temp_frq=1;
                while(us.find(temp_num)!=us.end()){
                    ++temp_num;
                    ++temp_frq;
                }
                ans = max(ans, temp_frq-1);
            }
        }
        return ans;
    }
};
