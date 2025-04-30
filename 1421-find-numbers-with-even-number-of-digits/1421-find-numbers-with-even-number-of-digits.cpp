class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0 ;

        for( int i = 0  ;i < n ; i++) {

            int val = nums[i];

            string str = to_string(val);
            int len = str.length();
            if( len % 2 == 0) {
                cnt++;


            }
        }
        return cnt ;
        
        
    }
};