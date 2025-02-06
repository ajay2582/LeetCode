class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1 ;
        int st = nums[0];
        int sst = nums[0];
        int ans = 1;
        int sans = 1;
        int scnt = 1;
        for(int i = 1 ; i< n;i++){

            int val = nums[i];
            if(val > st){
                cnt++;
                st = val;
                ans = max(ans , cnt);

            }
            else {
                cnt = 1;
                st = val;


            }
        }
        for(int i = 1 ; i< n;i++){

            int val = nums[i];
            if(val < sst){
                scnt++;
                sst = val;
                sans = max(sans , scnt);

            }
            else {
                scnt = 1;
                sst = val;


            }
        }

        return max(ans , sans);

       

      
        
    }
};