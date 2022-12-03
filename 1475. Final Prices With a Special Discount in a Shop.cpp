class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        int done;
        for(auto it=prices.begin();it!=prices.end();it++){
            done=0;
                for(auto b=it+1;b!=prices.end();b++){
                    if(*b<=*it){
                        v.push_back(*it-*b);
                        done=1;
                        break;
                        
                    }
                }
            if(!done){
                v.push_back(*it);
            }
            
        }
        return v;
        
    }
};
