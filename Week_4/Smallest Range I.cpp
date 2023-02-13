class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mi=nums.back();
        int ma=*nums.begin();
        ma+=k;
        if(mi-ma<=k)return 0;
        else return mi-k-ma;
        
        
    }
};
