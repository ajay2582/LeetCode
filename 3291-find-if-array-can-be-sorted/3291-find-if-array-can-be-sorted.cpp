class Solution {
public:
    bool canSortArray(vector<int>& nums) {

        vector<int> temp( nums.begin() , nums.end());


        for( int i = 1 ; i < nums.size(); i++) {


            int j = i ;





            while( j > 0 && temp[j-1] > temp[j]  && __builtin_popcount(temp[j-1])== __builtin_popcount(temp[j])) {
                swap( temp[j-1] , temp[j]);
                j--;

            }
        }










        sort( nums.begin() , nums.end());

        return   temp == nums;



        
    }
};