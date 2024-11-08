class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {

        int val = pow( 2 , maximumBit);
        vector<int> ans;
       


        int n = nums.size();
        int cal = 0 ;
        for( int i = 0 ;i <  n;i++ )
            {

                    cal = cal ^ nums[i];




            }
           
               int mask = (1<<maximumBit) - 1;

            for( int j = n - 1 ; j >= 0 ; j--) {

                int k = cal ^ mask;
                ans.push_back(k);
                cal=cal^nums[j];

                
             


            }


            return ans;


        
    }
};