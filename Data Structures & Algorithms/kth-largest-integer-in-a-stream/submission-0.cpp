class KthLargest {
public:
    int K;
    vector<int>arr;
    KthLargest(int k, vector<int>& nums) {
        K=k;
        arr=nums;
    }
    
    int add(int val) {
        arr.push_back(val);
        sort(arr.begin(),arr.end());
        return arr[arr.size()-K];
    }
};
