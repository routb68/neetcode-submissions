class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>us;
        for(int &x:nums){
            if(us.find(x)==us.end()){
                us.insert(x);
            }
            else return true;
        }
        return false;
    }
};