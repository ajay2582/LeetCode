class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

        int n  = nums.size();

        int m = n - 3 ;
         long long  maxi = 0;

        for(int i = 0 ; i <= m ; i++){
            int first = nums[i];

            for(int j = i + 1 ; j < n ;j++){

                        int second = nums[j];

                
                for(int k = j + 1 ;  k < n ;k++ ) {

                        long long  cal = first - second;
                        long long ans = cal * nums[k];
                        maxi = max( maxi , ans);



                }

                 


            }
        }

        return maxi ;




        
    }
};