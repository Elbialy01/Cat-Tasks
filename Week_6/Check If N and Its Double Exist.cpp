class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int a=2*arr[i];
         int l=0,h=arr.size()-1,m;
         while(h>=l){
             m=(l+h)/2;
             if(arr[m]==a&&m!=i){cout<<a<<arr[m];return true;}
             else if(arr[m]>a)h=m-1;
             else l=m+1;
         }
        }
        return false;

        
        
    }
};
