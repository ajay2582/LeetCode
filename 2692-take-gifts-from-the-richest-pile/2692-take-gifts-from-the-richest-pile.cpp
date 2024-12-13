class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        long long sum = 0;
        for(int i = 1 ; i <= k ;i++){
            int maxi = -1e9;
            int idx = -1;
            for(int j = 0 ; j < n;j++){
                if(gifts[j] >= maxi){

                    maxi = gifts[j];
                    idx = j;


                }
               
            }

            int val = sqrt(maxi);
            gifts[idx] = val;

        }

         for(int i  = 0 ; i < n ; i++){
            sum += gifts[i];
         }

        return sum ; 
    }
};