class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l =0,r=nums.size()-1;
        int m;
        while(r>=l){
            m=(l+r)/2;
            if(nums[m]==target)return m;
            else if(nums[m]>target)r=m-1;
            else l=m+1;
        }
        return l;
    }
};
