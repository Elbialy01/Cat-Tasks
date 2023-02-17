class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>i;
        for(auto it:s){
            if(!i.empty()&&i.top()==it)i.pop();
            else i.push(it);
        }
        string str="";
        while(!i.empty()){
            str+=i.top();
            i.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
