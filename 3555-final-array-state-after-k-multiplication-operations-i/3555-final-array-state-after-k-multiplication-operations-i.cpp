class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();

        for(int i = 1 ; i <=k; i++){
            int mini =1e9;
            int idx = -1;
            for(int j = 0;j < n;j++){
                if(nums[j] < mini){
                    mini = nums[j];
                    idx = j;
                }
            }
                int ans = mini * multiplier;
                nums[idx]=ans;
                

        }

        return nums;

        
        
    }
};