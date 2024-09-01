class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m , vector<int>( n , 0));
        vector<vector<int>> ans1;
        int mul = m * n;
        if( original.size() != mul){
            return ans1;

        }
        int k = 0 ;
        for(int i = 0 ; i < m;i++){
            for( int j = 0 ; j < n;j++){
                int val = original[k];

                ans[i][j]  = val;
                k++;
                

            }
         
        }

        if( k == original.size()){
            return ans;
        }
        else {
              return ans1;

        }

        
    }
};