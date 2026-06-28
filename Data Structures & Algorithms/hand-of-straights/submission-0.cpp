class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int gs) {
        if(hand.size()%gs!=0) return false;
        unordered_map<int,int>ump;
        for(int &x:hand)++ump[x];
        sort(hand.begin(),hand.end());

        for(int i=0;i<hand.size();++i){
            if(ump[hand[i]]>0){
                for(int j=hand[i];j<hand[i]+gs;++j){
                    if(ump[j]<=0) return false;
                    --ump[j];
                }
            }
        }
        return true;
    }
};
