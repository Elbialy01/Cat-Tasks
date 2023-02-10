class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>v;
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(str!="")v.push_back(str);
                str="";
            }
            else str+=s[i];

        }   
        if(str!="")
        v.push_back(str);
        int n=v.size();
        return v[n-1].length();     
    }
};
