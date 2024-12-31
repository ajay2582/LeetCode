class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int len = s.length();

        int n = 0;
        for(int i = len - 1 ; i >= 0 ; i--) {
            char ch = s[i];
            if( ch == ' ') {

            }
            else {
                n = i;
                break;


            }
        }

        for(int i =  n  ; i >=  0; i--){

            char ch = s[i];
            if(ch == ' ') {
                return cnt ;


            }
            else {

                cnt++;
            }
        }

        return cnt;













        // int cnt = 0;
        // // s += "$";
        // int len = s.length();
        // for(int i = n-1 ; i >= 0; i--){
        //     char ch = s[i];
        //     if(ch == ' ') {
        //         cnt = 0;
        //     }
        //     else if (ch == '$') {
        //         return cnt - 1 ;
        //     }
        //     cnt++;

        // }

        // return 0;


        
    }
};