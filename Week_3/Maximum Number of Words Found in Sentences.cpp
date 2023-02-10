class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int m=0;
        for(auto it:s){
            int res=0;
            for(int i=0;i<it.length();i++)if(it[i]==' ')res++;
            res++;
            m=max(res,m);
        }
       return m; 
    }
};
