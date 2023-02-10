class Solution {
public:
    bool detectCapitalUse(string s) {
        int res=0;
        for(int i=0;i<s.length();i++){
            if(isupper(s[i]))res++;
        }
        if(res==0||res==s.length())return true;
      else if(isupper(s[0])&&res==1)return true;
      else return false;
        
    }
};
