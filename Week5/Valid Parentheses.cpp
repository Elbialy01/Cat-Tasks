class Solution {
    	
public:
    bool isValid(string str) {
       	stack<char>s;
	int n = str.length();
      
	for (int i = 0;i < n;i++) {
		if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
			s.push(str[i]);
		}
		else if (!s.empty()&&str[i] == ')' && s.top() == '(') {
			s.pop();
            
		}
		else if (!s.empty()&&str[i] == '}' && s.top() == '{') {
			s.pop();
            
		}
		else if (!s.empty()&&str[i] == ']' && s.top() == '[') {
			s.pop();
            
		}
        else
		return false ;
	}

return s.empty();
        
    }
};
