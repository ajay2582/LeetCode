class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp(nums.begin(), nums.end());
        sort(temp.begin(),temp.end());
        for(int i = 1 ; i <= n;i++){
            reverse(temp.begin(), temp.begin()+1);
            reverse(temp.begin()+1 , temp.end());
            reverse(temp.begin(), temp.end());
            if(temp==nums){
                return true;
            }




        }
        return false;






        
        
        
    }
};