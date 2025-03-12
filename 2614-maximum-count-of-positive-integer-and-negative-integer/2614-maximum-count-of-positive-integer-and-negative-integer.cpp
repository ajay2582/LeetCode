class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int pos = 0 ;
        int neg = 0 ;
    
        for(int i = 0 ; i < n;i++){
            int val = nums[i];
            if(val < 0) {
                neg++;
            }
            else if( val > 0 ){
                pos++;
            }
        }

        return max( pos , neg);

        
    }
};