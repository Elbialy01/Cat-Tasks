class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int>v;
        int r=1;
        reverse(d.begin(),d.end());
        for(auto it:d){
            r+=it;
            if(r==10)v.push_back(0),r=1;
            else v.push_back(r),r=0;
        }
        if(r)
        v.push_back(r);
     reverse(v.begin(),v.end());
       
        return v;
        
    }
};
