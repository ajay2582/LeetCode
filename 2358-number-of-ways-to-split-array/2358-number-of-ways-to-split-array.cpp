class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

        long long  sum = accumulate(nums.begin() , nums.end() , 0LL);

        
        long long  left = 0;
        long long  cnt = 0;
        long long  n = nums.size();
        for(long long  i = 0 ; i < n - 1; i++){
             left += nums[i];
             sum -= nums[i];
             if(left >= sum){
                cnt++;
             }


            
            
        }
        return cnt;


        
    }
};