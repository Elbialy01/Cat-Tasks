class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& v) {
        vector<int>k;
        for(auto it:v){
            int counter=0;
            for(auto b:v){
                if(it>b)
                    counter++;
            }
            k.push_back(counter);
        }
    return k;
        
    }
};
