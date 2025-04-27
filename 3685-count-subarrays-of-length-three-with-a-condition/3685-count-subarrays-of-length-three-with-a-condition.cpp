class Solution {
public:
    int countSubarrays(vector<int>& nums) {

        int n = nums.size();
        int i = 0 ;
        int j  = 0 ;
        int cnt = 0 ;
        while( j < n ) {

            if( j -  i + 1 < 3) {
                j++;
            }
            else if( j - i + 1 == 3) {
                int firstnum = nums[i];
                int secondnum = nums[i+1];
                int thirdnum = nums[j];

                int sum = firstnum + thirdnum;
                float   res =  (float)secondnum / 2  ;
                if( res ==  sum  ) {
                    cnt++;
                }

                i++;
                j++;

            }
        }
        return cnt ;

        

        
    }
};