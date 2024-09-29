class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int  n = cp.size();
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0 ; i < k;i++){
            sum+=cp[i];

        }
        maxi = sum;
        int rindex = n-1;
        for(int i = k - 1 ; i>=0;i--){
            sum-=cp[i];
            sum+=cp[rindex];
            rindex--;
            maxi = max(maxi , sum);
        }
        return maxi;
        
    }
};