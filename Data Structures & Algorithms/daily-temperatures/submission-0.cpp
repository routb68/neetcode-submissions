class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans;
        for(int i =0;i<temp.size();++i){
            for(int j=i+1;j<temp.size();++j){
                if(temp[i]<temp[j]){
                    ans.push_back(j-i);
                    break;
                }
            }
            if(ans.size()!=i+1) ans.push_back(0);
        }
        return ans;
    }
};
