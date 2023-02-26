class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       multimap<int,int>m;
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[i].size();j++){
                sum+=mat[i][j];

            }
            m.insert({sum,i});

        }
        vector<int>v;
        for(auto it:m){
            if(k-->0)v.push_back(it.second);
        }
        return v;
    }
};
