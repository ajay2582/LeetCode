class Solution {
public:
    int getLucky(string s, int k) {
        string temp;
      

        for(int i = 0 ; i<s.length();i++){
            int val = s[i] - 'a' + 1;
             string str = to_string(val);
             temp  += str;
        }
        int res = 0;
        for(int i = 1; i <= k ; i++){
            int ans = 0;
            
            for(int j = 0 ; j < temp.length();j++){

            int val = temp[j] - '0';
            ans += val;

            


            }
            res = ans;
           
            temp = to_string(ans);
          

        }

        return   res;

        
        
    }
};