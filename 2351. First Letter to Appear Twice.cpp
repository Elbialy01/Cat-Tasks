class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>q;\
            char a;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(!q.empty()){
                if(q.count(s[i])){
                   a=s[i];
                    break;
                }
                    
                }
                
            
            q.insert({s[i],i});
        }
       return a;
    }
};
