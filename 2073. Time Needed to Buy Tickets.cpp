class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<pair<int,int>>q;
        for(int i=0;i<tickets.size();i++)
           q.push(make_pair(i,tickets[i]));
        int time=0;
    
        while(!q.empty()){
            int s =q.size();
            
            while(s--){
                pair<int,int> n=q.front();
               int b= n.second;
                int a=n.first;
                q.pop();
                b--;
                time++;
                if(b>0){
               q.push(make_pair(a,b));           
                }
             if(a==k&&b==0){
                    return time;
                }
               
             
                
            }
            
        }
        return time;
    }
};
