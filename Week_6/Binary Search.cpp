class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int middle;
        int left=0,rigth=nums.size()-1;
        while(left<=rigth){
            middle=(left+rigth)/2;
            if(nums[middle]==target){
                return middle;
            }
            else if(nums[middle]>target)rigth=middle-1;
            else left=middle+1;
        }
        return -1;
    }
};
