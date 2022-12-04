class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        stack<char>h;
        for(int i=0;i<n;i++){
            if(!h.empty()){
                if(s[i]==')'&&h.top()=='(')
                    h.pop();
                else h.push(s[i]);
            }
            else h.push(s[i]);
        }
        return h.size();
    }
};
