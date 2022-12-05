class Solution {
public:
    int timeRequiredToBuy(vector<int>& y, int k) {
    int    counter=0;
        for(int i=0;;i++){
            if(y[i%y.size()]>0){
                counter++;
                y[i%y.size()]--;
                
            }
             if(y[i%y.size()]==0&&i%y.size()==k)
                return counter;
        }

    

    }
};
