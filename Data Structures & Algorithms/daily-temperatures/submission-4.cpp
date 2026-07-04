class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans;
        for(int i=0;i<temp.size();++i){
            int res=0;
            for(int j=i+1;j<temp.size();++j){
                if(temp[j]>temp[i]){
                    res = j-i;
                    break;
                }
            }
            ans.emplace_back(res);
        }
        return ans;
    }
};
