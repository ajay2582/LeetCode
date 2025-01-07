class Solution {
public:
    bool isValid(string s) {
        int n =s.length();
        if(n == 1){
            return false;
        }
        stack<char>st;
        for(int i = 0 ; i < n;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }else {
 
                if(st.empty() == true) {
                    return false;
                }
                char ch2 = st.top();
                
                // Validate matching pairs
                if ((ch2 == '[' && s[i] != ']') || 
                    (ch2 == '{' && s[i] != '}') || 
                    (ch2 == '(' && s[i] != ')')) {
                    return false;
                }
                st.pop(); 
               

            }

        }

    
        if(st.empty() == true) {
            return true;

        }

        return false;
        



        
    }
};