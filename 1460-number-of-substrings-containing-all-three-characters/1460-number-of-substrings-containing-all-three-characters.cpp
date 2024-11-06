class Solution {
public:
    int numberOfSubstrings(string s) {

        int n = s.length();
        vector<int> h( 3 , -1);
        int cnt = 0;

        for( int i = 0 ; i < n ;i++){

            h[s[i] - 'a'] = i;

            int mini = min({ h[0] ,  h[1] , h[2]});

            if( mini != -1) {

                mini = mini + 1;

                cnt += mini;

            }





        }

        return cnt ;


        
        

    }
};