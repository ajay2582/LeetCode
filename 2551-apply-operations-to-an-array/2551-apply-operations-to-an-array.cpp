class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>temp;
        for(int i = 0 ; i < n-1;i++){
            

            if(nums[i] == nums[i+1]) {
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
               

            }
        }
        for(int i = 0 ; i< n;i++){
            if(nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }
        int m = temp.size();
        int zero = n - m ;

        for(int i= 1 ; i <= zero; i++){
            temp.push_back(0);
        }
        return temp;

        
    }
};