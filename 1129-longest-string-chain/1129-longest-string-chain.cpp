class Solution {
public:

       

         bool compare1( string   & aage , string & piche ) {

            int n = aage.length();
            int m = piche.length();
            // vector<int> hash( 26 , 0);



            if(n != m + 1) {
                return false;
            }

            int i = 0 ;
            int j = 0 ;


            while( i <  n ) {

                if( aage[i] == piche[j]) {
                    i++;
                    j++;

                }
                else  if( aage[i] != piche[j]) {
                    i++;

                }
            }

            return i == n && j == m;
            
            



         }

           static   bool comp1( string &s1 , string &s2) {
                int n = s1.length();
                int m = s2.length();


            return   n  <  m;

           }
    int longestStrChain(vector<string>& arr) {







            int n = arr.size();

            sort(arr.begin() , arr.end()  , comp1);


           vector<int>dp(n , 1);
        // vector<int>hash(n , 0);
        // vector<int>temp;
        
        // for( int i =  0 ; i < n; i++){
        //     hash[i] = i;
            
        // }
        
        for( int i = 0 ; i< n;i++){
            for( int prev = 0 ; prev < i ;prev++){
                if( compare1(arr[i] , arr[prev]) && 1+dp[prev] > dp[i]) {
                    
                    dp[i] = 1 + dp[prev];
                    // hash[i] = prev;
                    
                }
            }
        }
        
        int index = -1;
        int maxi = 0;
        for( int i = 0 ; i < n; i++){
            if( dp[i] > maxi){
                maxi = dp[i];
                index = i;
                
            }
            
        }
        
        //  while(temp.size()!= maxi) {
             
        //      temp.push_back(arr[index]);
        //      index = hash[index];
             
             
             
        //  }
        //  reverse(temp.begin() , temp.end());
        //  return temp;

        return maxi;


        
    }
};