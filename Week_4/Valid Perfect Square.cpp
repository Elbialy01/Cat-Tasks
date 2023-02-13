class Solution {
public:
    bool isPerfectSquare(int num) {
        int g=floor(sqrt(num));
        cout<<g;
        if(g*g==num)return true;
        else return false;
    }
};
