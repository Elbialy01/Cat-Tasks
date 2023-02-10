class Solution {
public:
    string reverseVowels(string s) {
        string vowels="aeiouAEIOU";
        set<char>c;
        string g="";
        for(int i=0;i<10;i++)c.insert(vowels[i]);
        for(int i=0;i<s.length();i++){
            if(c.count(s[i]))g+=s[i];
        }
        reverse(g.begin(),g.end());
        int k=0;
        for(int i=0;i<s.length();i++){
            if(c.count(s[i]))s[i]=g[k++];
        }
        return s;
        
    }
};
