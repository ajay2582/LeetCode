class Solution {
public:

       int f( int index , int prev ,   vector<int>& nums  ,  vector<vector<int>> &dp ) {

            int n = nums.size();


           if( index  ==  n  ) {
               return 0 ;


           }

           if( dp[index][prev + 1 ] != -1) {
               return dp[index][prev + 1 ];

           }

           int nottake = 0 + f( index +  1 , prev , nums , dp);
               int take  =  INT_MIN;

           if( prev == -1 || nums[index ] > nums[prev ]) {
                   take = 1 + f( index + 1 , index , nums , dp);


               
           }
           
           return    dp[index][prev  + 1 ] =  max ( nottake , take );

       }
    int lengthOfLIS(vector<int>& nums) {
         int n = nums.size();

        vector<vector<int>> dp(  n  , vector<int> ( n + 1 , -1));

        // for( int index  = n -1 ; index >= 0; index--) {

        //     for( int prev = index -1 ;  prev >=-1 ; prev--) {

               
        //    int nottake = 0 +  dp[index +  1][prev + 1] ;

        //        int take  = 0;

        //    if( prev == -1 || nums[index ] > nums[prev]) {
        //            take = 1 +  dp[index + 1][index + 1];



               
        //    }
           
        //          dp[index][prev + 1] =  max ( nottake , take );


        //     }
        // }



        // return   dp[ 0 ][-1 + 1];

        return f( 0 ,  -1 , nums , dp );



        
    }
};