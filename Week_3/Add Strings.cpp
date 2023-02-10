class Solution {
public:
    string addStrings(string num1, string num2) {
      string s="";
            reverse(num1.begin(),num1.end());
                  reverse(num2.begin(),num2.end());


      int n=min(num1.length(),num2.length());
      int r=0;
      for(int i=0;i<n;i++){
          int a=r+(num1[i]-'0')+(num2[i]-'0');

          if(a>=10){
              string g=to_string(a);
              r=g[0]-'0';
              a=g[1]-'0';
          }
          else r=0;
          s+=(a+'0');  

      }
      if(num1.length()>num2.length()){
          for(int i=n;i<num1.length();i++){
          int a=r+(num1[i]-'0');
        if(a>=10){
              string g=to_string(a);
              r=g[0]-'0';
              a=g[1]-'0';
          }          else r=0;
          s+=(a+'0'); 
          }
          
      }
      else      if(num1.length()<num2.length()){
          for(int i=n;i<num2.length();i++){
          int a=r+(num2[i]-'0');
        if(a>=10){
              string g=to_string(a);
              r=g[0]-'0';
              a=g[1]-'0';
          }          else r=0;
          s+=(a+'0'); 
          }
          
      }
      if(r!=0)s+=(to_string(r));
  reverse(s.begin(),s.end());

      return s;

    }
};
