class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1,m;
        vector<int>v;
        while(r>=l){
            m=(l+r)/2;
            if(nums[m]==target) break;
            if(nums[m]>target)r=m-1;
            else l=m+1;
        }
        if(nums[m]!=target)return v;
        while(m>0&&nums[m-1]==target)m--;
        for(int i=m;i<nums.size();i++){
            if(nums[i]==target)v.push_back(i);
        }
        return v;
        
    }
};
