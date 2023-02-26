class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
      sort(nums.begin(),nums.end());
      
        for(int i=0;i<=nums.size();i++){
            int left=0;int rigth=nums.size()-1;
            int middle;bool found =false;
            while(rigth>=left){
                middle=(left+rigth)/2;
                if(nums[middle]==i){
                    found =true;
                    break;
                }
                else if(nums[middle]>i)rigth=middle-1;
                else left=middle+1;

            }
            if(!found)return i;
    
        }
        return nums.size();
    }
};
