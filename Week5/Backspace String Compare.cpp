class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st,sr;
        for(auto it:s){
            if(it=='#'&&!st.empty())st.pop();
            else if(it!='#')st.push(it);

        }
        for(auto it:t){
            if(it=='#'&&!sr.empty())sr.pop();
            else if(it!='#')sr.push(it);

        }
        while(!st.empty()&&!sr.empty()){
            if(st.top()!=sr.top())return false;
            st.pop(),sr.pop();
        }
        if(!st.empty()||!sr.empty())return false;
return true;
    }
};
