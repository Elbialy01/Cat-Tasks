class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        long long sum=0;
        for(auto it:operations){
            if(it=="C"&&s.size()){
                s.pop();
            }
            else if(it=="D"){
                s.push(2*s.top());
            }
            else if(it=="+"){
                int a=s.top();
                s.pop();
                int p=s.top()+a;
                s.push(a);
                s.push(p);
            }
            else {
                  int num = stoi(it);
                s.push(num);
            }
        }
        while(s.size()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};
