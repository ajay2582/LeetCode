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
    int largestRectangleArea(vector<int>& v) {

                      int cols = v.size();

                
                 int maxi = -1e9;


          vector<int> left(cols);
          vector<int> right(cols) ;
          



            

          left = nsl( v , cols );
          right = nsr( v  , cols );

           
                      for(int i = 0 ; i < cols; i++){

                     
                       maxi = max( maxi ,   (right[i] - left[i] - 1) * v[i]);
                      }
                      return maxi ;
                      

                




            

        
    }
};