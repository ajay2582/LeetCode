class Solution {
public:
    vector<vector<int>> generate(int n) {

        vector<vector<int>>temp;

        vector<int>ans;
        ans.push_back(1);

        temp.push_back(ans);
        if( n == 1) {
            return temp;

        }

        for( int i = 1  ; i < n ;i++){

            vector<int>res;
            res.push_back(1);


            for( int col = 0 ; col <=  i - 2 ; col++){

                int val = temp[i-1][col];
                int sec = temp[i-1][col + 1];
                int sum = val + sec;

                res.push_back(sum);



            }







            res.push_back(1);
            temp.push_back(res);




        }

        return temp;
        



    


      
        

        
    }
};