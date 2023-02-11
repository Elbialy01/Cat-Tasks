class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        string y=str;
        reverse(y.begin(),y.end());
        if(y==str)return true;
        else return false;
        
    }
};
