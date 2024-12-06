class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        sort( banned.begin() , banned.end());

        int cnt = 0;
        int sum = 0;
        for(int i = 1 ; i <= n ;i++){
            if(binary_search(banned.begin() , banned.end() , i)) {

            }
            else {
                sum+=i;
                if( sum <= maxSum) {
                    cnt++;
                }
            }

        }

        if(cnt==0){
            return 0;
        }

        return cnt;

        
        
    }
};