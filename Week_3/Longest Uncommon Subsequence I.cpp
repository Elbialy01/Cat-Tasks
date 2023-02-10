class Solution {
public:
    int findLUSlength(string a, string b) {
        int res=0;
        int u=0;
        if(b<a){
            string temp =b;
            b=a;
            a=temp;
        }
        map<string,int>m;
        
        for(int i=0;i<a.length();i++){
            for(int j=i;j<a.length();j++){
                string s=a.substr(i,j+1);
                m[s]=s.length();
            }
        }
        map<string,int>ma;
        for(int i=0;i<b.length();i++){
            for(int j=i;j<b.length();j++){
                                string s=b.substr(i,j+1);

                if(!m[s]){
                    int y=s.length();
                    res=max(res,y);
                }
                ma[s]++;
            }
        }
                for(int i=0;i<a.length();i++){
            for(int j=i;j<a.length();j++){
                               string s=a.substr(i,j+1);

                if(!ma[s]){
                    int y=s.length();
                    res=max(res,y);
                }
        }
                }
                cout<<a.length()<<" "<<b.length();
        if(res)
return res;
else return -1;
    }
};
