class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cal  = n / 3 ;
        vector<int>res;
        for(int i = 0 ;i < n;i++){
            int cnt =  count(nums.begin() , nums.end() , nums[i]);

            if(cnt > cal){
                
                res.push_back(nums[i]);
            }
            nums[i] = -1e9;
        }
        set<int>st(res.begin(), res.end());
        vector<int>ans(st.begin() , st.end());
        return ans;
        
    }
};