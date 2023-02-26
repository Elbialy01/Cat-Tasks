class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int>s;
        for(auto it:arr)s.insert(it);
        for(int i=1;i<=100000;i++){
            if(!s.count(i)){
                if(k==1)return i;
                cout<<k;
                 k--;
            }
        }
       return 0; 
    }
};
