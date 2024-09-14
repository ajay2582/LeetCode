class Solution {
public:
    int reverse(int x) {
        if( x == 0){
            return 0;
        }
         int sign = ( x < 0) ? -1 : 1 ;

        string str = to_string(abs(x));
        long long  len = str.length();
        // if(str[len - 1 ] == '0' ) {
        //     str.pop_back();

        // }
         std::reverse(str.begin() , str.end());

  
             long long   ans =   stoll(str);
             if( ans > 2147483647){
                return 0;
                
             }

             return sign * ans ;
        
    }
};