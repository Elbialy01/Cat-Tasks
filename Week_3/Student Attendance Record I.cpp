class Solution {
public:
    bool checkRecord(string s) {
       unordered_map<char,int>m;
        char last;
        int y=0;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            if(last=='L'&&s[i]=='L')
            y++;
            else if(s[i]=='L'){
                y=1;
                last=s[i];
            }
            else last=s[i],y=0;
            last=s[i];
            if(y==3)return false;
            
        }
      for(auto it=m.begin();it!=m.end();it++){
          if(it->first=='A'&&it->second>=2)return false;
       //   else if(it->first=='L'&&it->second>=3)return false;
      }
      return true;
        
    }
};
