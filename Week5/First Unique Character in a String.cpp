class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        map<char,int>m;
     for(int i=0;i<n;i++){
         if(!m.empty()&&m.count(s[i]))
          m.find(s[i])->second++; 
        else  m.insert({s[i],1});
     }
        for(int i=0;i<n;i++){
            auto it =m.find(s[i]);
            if(it->second==1){
                return i;
            }
        }

return -1;
    }
};
