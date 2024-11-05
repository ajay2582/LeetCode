class Solution {
public:
    int characterReplacement(string s, int k) {

        int i = 0 ;
        int j = 0 ;
        int maxi = -1e9;
        int mf  = 0;
        int n = s.length();
        vector<int>h(26 , 0);

        while( j < n) {

            h[s[j] - 'A']++;
            mf = max( mf , h[s[j] - 'A']);

            if( ( j - i  + 1) - mf > k) {

                while( (  j - i  + 1 ) - mf > k) {

                    h[s[i] - 'A']--;
                    mf = 0;

                    for( int t =  0 ; t <=  25; t++ ){
                            

                        mf = max( mf , h[t]);

                    }

                    i++;



                }
            }

            maxi = max( maxi ,  j - i  + 1);
            j++;





        }


        if( maxi == -1e9) {
            return 0 ;
        }
        return maxi ;

       
        










        
        
    }
};