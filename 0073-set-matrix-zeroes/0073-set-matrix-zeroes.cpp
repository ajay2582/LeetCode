class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<pair<int , int >> vec;

        //  { row , col }


        for(int i = 0 ; i < row ; i++){
            for(int j = 0  ;j < col ; j++){
                if(matrix[i][j]  == 0) {
                    vec.push_back({ i , j });

                }
            }
        }

        for(int i = 0 ; i < vec.size(); i++){
            int row1 = vec[i].first;
            int col1 = vec[i].second;

            for( int j = 0; j < col ;j++){

                matrix[row1][j] = 0;
                
            }
            for(int st = 0 ; st < row ;st++){

                matrix[st][col1] = 0;

            }

        
        }


        


    }
};