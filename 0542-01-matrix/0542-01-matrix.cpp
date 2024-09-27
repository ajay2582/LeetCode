class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
                  
                  int n = mat.size();
                  int m = mat[0].size();



                vector<vector<int>> vis( n , vector<int> ( m , 0));
                        vector<vector<int>> ans( n , vector<int> ( m , 0 ));

                        queue<pair<pair<int, int> , int >> q ;

                        for ( int row = 0; row < n; row++) {

                            for( int col = 0 ; col < m ; col++) {

                                   if( mat[row][col] == 0   && vis[row][col] == 0) {

                                     vis[row][col]  = 1;
                                            q.push({ { row  , col }  , 0});


      
                                   }
                            }
                        }

                        while( q.empty() == false) {

                            int row = q.front().first.first;
                            int col = q.front().first.second;


                            int neardist = q.front().second;

                            ans[row][col] = neardist;

                            q.pop();

                            int delrow[] = { -1 , 0 , 1 , 0 };
                            int delcol[] ={ 0 , 1 , 0 , -1};

                            for ( int i = 0; i < 4; i++) {

                                int nrow = row + delrow[i] ;
                                int ncol =  col + delcol[i];

                                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                                mat[nrow][ncol] == 1 && vis[nrow][ncol] == 0  ) {

                                    vis[nrow][ncol] = 1;
                                    

                                  
                                    q.push( {{ nrow , ncol} , neardist + 1 });

                                }

                            }
                        }

           return ans;
    }
};