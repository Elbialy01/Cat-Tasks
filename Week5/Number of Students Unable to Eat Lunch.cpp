class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sa) {
     while(true)
     {
         if(st.empty()){
             return 0;
         }
         if(st.front()==sa.front()){
             st.erase(st.begin());
             sa.erase(sa.begin());
         }
         else {
             int n=st.size();
             int y=n;
             while(n--){
         if(st.front()==sa.front()){
             st.erase(st.begin());
             sa.erase(sa.begin());
         }
         else {
             st.push_back(st.front());
             st.erase(st.begin());
         }
             }
                      if(y==st.size()){
             return y;
         }

         }
     }        
        
    }
};
