class Solution {
public:
    int countSegments(string s) {
        string str="";
        int res=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '&&str!=""){
                res++;
                str="";
            }
            else  if(s[i]!=' ')str+=s[i];
        }
        if(str!="")res++;
        return res;
    }
};
