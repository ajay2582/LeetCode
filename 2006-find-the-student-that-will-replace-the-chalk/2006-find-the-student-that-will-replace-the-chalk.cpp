class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // int ans;
        int n = chalk.size();
        long long  sum = accumulate( chalk.begin() , chalk.end() , 0LL );
         k%=sum;



        for(int i = 0 ;i < n ;i++){
            int val = chalk[i];
        
            if(k > val || k == val){
                k  -= val;
            }
            else{
                // ans = i;
                // break;
                return i ;
            }
           

        }
        return 0;

        
    }
};