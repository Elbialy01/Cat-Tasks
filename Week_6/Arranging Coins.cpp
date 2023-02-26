class Solution {
public:
    int arrangeCoins(int n) {
        int res=0;
        int y=0;

        while(true){
            res=res+1;
            if(n>=res){
                y++;
                n-=res;
            }
            else return y;

        }
 return y;
    }
};
