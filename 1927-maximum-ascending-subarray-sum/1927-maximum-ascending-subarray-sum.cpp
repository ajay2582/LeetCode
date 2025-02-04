class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi=INT_MIN;
        int n = nums.size();
        if( n == 1) {
            return nums[0];
            
        }
        for( int  i = 0 ;i < n - 1;i++){
            start:
            int fst = nums[i];
            int sum = nums[i];
            maxi = max( maxi , sum );


            for( int j = i +  1 ;j < n;j++){
                if( nums[j] > fst) {

                    sum += nums[j];
                    fst = nums[j];
                    maxi = max(maxi , sum );


                }
                else {

                    i = j;
                    goto start;
                    
                }
            }



        }


        return maxi ;






        
        
        
    }
};