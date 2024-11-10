class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {

           int n = arr.size();

           vector<int>dp(n , 1);
        // vector<int>hash(n , 0);
        // vector<int>temp;
        
        // for( int i =  0 ; i < n; i++){
        //     hash[i] = i;
            
        // }
        
        for( int i = 0 ; i< n;i++){
            for( int prev = 0 ; prev < i ;prev++){
                if( arr[prev] < arr[i] && 1+dp[prev] > dp[i]) {
                    
                    dp[i] = 1 + dp[prev];
                    // hash[i] = prev;
                    
                }
            }
        }
        
        int index = -1;
        int maxi = -1e9;
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