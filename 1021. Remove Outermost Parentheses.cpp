class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string str="";
        stack<int>sm;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                sm.push(s[i]);
                if(sm.size()>1)
                {
                    str+="(";
                    
                }
            }
            
            
            else if(s[i]==')'&&sm.size()>1){
                str+=")";
                sm.pop();
            }
            else if(sm.size()==1) {
                sm.pop();
            }
           
        }
        return str;
        
    }
};
