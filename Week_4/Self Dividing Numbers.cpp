class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left ;i<=right;i++){
            int u=i;
            while(u>0){
                if(u%10!=0&&i%(u%10)==0)u/=10;
                else break;
            }
            if(!u)v.push_back(i);
        }
        return v;
    }
};
