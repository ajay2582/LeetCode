class Solution {
public:


int f(int index , int target , vector<int> &arr , vector<vector<int>> &dp ) {
         
        //   if( ind == 0) {
               
             if(index == 0){
            if(  target == 0 && arr[0] == 0){
                return 2;
            }
            else if(target == 0 || arr[0] == target) return 1;
            return 0;
        }
            
            if(dp[index][target] != -1) {
                
                return dp[index][target];
                
            }
            
            int mod = 1e9 + 7;
            
            int left = f( index - 1 , target , arr , dp);
            
            int right = 0;
            
            if( arr[index] <= target ) {
                
                right =  f( index - 1 , target - arr[index] , arr , dp );
                
            }
            
            return dp[index][target] =  ( right + left ) % mod;
            
    }






    int findTargetSumWays(vector<int>&  arr, int d) {




          int ts = 0;
          int n = arr.size();

          
         for( int  i = 0 ; i < arr.size(); i++){
              ts = ts + arr[i];
              
             
         }
         vector<vector<int>> dp( n   + 1 , vector<int> (  ts  + 1 ,   -1  ));
         
         int tar = ( ts - d ) / 2;
         
         if(    (ts - d ) < 0   ||  (ts - d ) % 2 != 0) {
             
             return 0;
             
         }
         
         
         return f( n- 1 , tar , arr , dp);






        
    }
};