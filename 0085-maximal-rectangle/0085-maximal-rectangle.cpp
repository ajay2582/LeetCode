class Solution {
public:
             vector<int>  nsr( vector<int> &v , int cols ) {

                       vector<int> v1;

                       int col = cols ;

                  stack<pair<int , int>> st;
                  int lefti =   col ;

                  for( int i = cols -1  ; i  >= 0; i--){

                  if( st.size() == 0) {

                      v1.push_back(lefti);


                  }

                  else if( st.size() >0 &&   st.top().first < v[i] ) {

                      v1.push_back( st.top().second);

                  }

                  else if( st.size()  > 0 && st.top().first >= v[i]) {

                      while( st.size() > 0 && st.top().first >= v[i]) {


                          st.pop();


                      }


                      if( st.size() == 0) {
                          v1.push_back(lefti);

                      }

                      else {

                                  v1.push_back(st.top().second);

                      }
                  }


                  st.push({  v[i] , i});
                  
            
                  }


                  reverse( v1.begin() , v1.end());
                  

                  return v1;



             }
        vector<int>  nsl( vector<int> &v  , int cols ) {

                  vector<int> v1;
                  stack<pair<int , int>> st;
                  int lefti = -1;

                  for( int i = 0 ; i < cols; i++){

                  if( st.size() == 0) {

                      v1.push_back(lefti);


                  }

                  else if( st.size() >0 &&   st.top().first < v[i] ) {

                      v1.push_back( st.top().second);

                  }

                  else if( st.size()  > 0 && st.top().first >= v[i]) {

                      while( st.size() > 0 && st.top().first >= v[i]) {


                          st.pop();


                      }


                      if( st.size() == 0) {
                          v1.push_back(lefti);

                      }

                      else {

                                  v1.push_back(st.top().second);

                      }
                  }


                  st.push({  v[i] , i});

            
                  }

                  return v1;



        }

         int MHA( vector<int> &v , int cols ) {
          
          vector<int> width(cols , 0);

          vector<int> left;
          vector<int> right ;
          vector<int> area( cols , 0 );


            

          left = nsl( v , cols );
          right = nsr( v  , cols );

             for( int i = 0 ; i< cols ; i++){

                 width[i] =   right[i] - left[i] - 1;

                 area[i] =  width[i] * v[i];

                


             }


             return *max_element( area.begin() , area.end());


            

              

         }

      
    int maximalRectangle(vector<vector<char>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();


       

        vector<int> oned(cols , 0);
        int maxi = -1e9;

        for( int i = 0 ; i < cols;i++){
                
            oned[i] =  (matrix[0][i]) - 48;
        }


         maxi = MHA( oned , cols);





        for( int i = 1 ; i < rows ; i++){
            for( int j = 0 ; j< cols ; j++){


                //    oned[j] = (matrix[i][j] == '1') ? oned[j] + 1 : 0;
                if(matrix[i][j] =='0') {
                  oned[j] = 0;

                }
                else {

                    oned[j] = oned[j]+ 1;

                }





            }
                int res = MHA( oned  , cols  );
                 maxi = max( res , maxi );
        }

        return maxi ;





        
    }
};