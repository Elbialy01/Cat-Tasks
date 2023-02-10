class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        string f="!@#&()–[{}]:;',?/""`~$^+=<>“*._ -";
        set<char>se;
        for(int i=0;i<f.length();i++){
            se.insert(f[i]);
        }
        for(int i=0;i<s.length();i++){
            char a=tolower(s[i]);
            int d=a;
            if((a>='a'&&a<='z')||!se.count(a)&&d!=34)str+=a;

        }
        string h=str;
        cout<<str;
        reverse(h.begin(),h.end());
        if(str==h)return true;
        else return false;
        
    }
};
