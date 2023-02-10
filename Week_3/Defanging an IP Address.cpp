class Solution {
public:
    string defangIPaddr(string address) {
        string str="";
        string s="[.]";
        for(int i=0;i<address.length();i++){
            if(address[i]!='.')str+=address[i];
            else str+=s;

        }
        return str;
    }
};
