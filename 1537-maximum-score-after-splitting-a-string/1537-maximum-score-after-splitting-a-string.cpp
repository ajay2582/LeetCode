class Solution {
public:
    int maxScore(string s) {

        int ans = -1e9;
        int zero = 0;
        int one = 0;
        int n = s.length();
        for(int i = 0 ; i < n - 1 ;i++){
            int fin = n  - i - 1 ;

            string left = s.substr(0 , i + 1);
            string right = s.substr(i + 1 , fin );
            int lenleft = left.length();
            int lenright = right.length();
            for(int j =0 ; j < lenleft;j++){
                char ch = left[j];
                if(ch == '0'){
                    zero++;
                }

            }
            for(int k = 0 ; k < lenright;k++){
                char ch = right[k];
                if(ch == '1') {
                    one++;

                }
            }

            ans = max(ans ,zero+one);
            zero = 0 ;
            one = 0 ;


        }
        return ans ;




        
    }
};