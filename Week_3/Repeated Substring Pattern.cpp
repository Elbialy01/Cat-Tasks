class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i=1;i<s.length();i++){
            set<string>st;
            if(s.length()%i==0){
            for(int j=0;j<s.length();j+=i){
                st.insert(s.substr(j,i));

            }
            
            if(st.size()==1){
                cout<<st.size()<<i;
                return true;
            }
            }
        }
       return false; 
    }
};
