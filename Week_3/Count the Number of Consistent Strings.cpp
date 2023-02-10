class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       unordered_map<char,int>m;
        for(int i=0;i<allowed.length();i++){
            m[allowed[i]]++;
        }
        int res=0;
        for(auto it:words){
            int j=0;
          ///  sort(it.begin(),it.end());
            for(int i=0;i<it.length();i++){
                if(m[it[i]])j++;

            }
            if(j==it.length())res++;

        }
      return res;  
    }
};
