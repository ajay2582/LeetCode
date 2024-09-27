class Solution {
public:
        void dfs( int row , int col ,  vector<vector<int>> &vis 
        , vector<vector<char>>& board ) {
              int n = board.size();
              int m = board[0].size();

              vis[row][col] = 1;

              int delrow[] = { -1 , 0 ,  1 , 0 };
              int delcol[] = { 0 , 1 , 0 , -1 };

               for ( int i = 0 ; i < 4; i++) {
                   int nrow = row + delrow[i];
                   int ncol = col + delcol[i];

                   if( nrow >0 && nrow < n  -1  && ncol > 0 && ncol < m - 1   && 
                   board[nrow][ncol] == 'O' && vis[nrow][ncol] == 0) {
                       dfs( nrow , ncol , vis , board);

                   }


               }
              
            
        }
    void solve(vector<vector<char>>& board) {

       int n = board.size();
       int m = board[0].size();
        vector<vector<int>> vis( n , vector<int> ( m , 0 ));

          for( int col = 0 ; col < m ; col++) {


              if( board[0][col]  == 'O' && vis[0][col] == 0) {
                         
                              
                         dfs( 0 , col , vis , board);


              }

              if( board[n - 1][col] == 'O' && vis[n - 1][col] == 0) {
                
                             dfs( n - 1 , col , vis , board);


              }
          }

          for( int i = 0 ; i < n; i++) {


              if( board[i][0] == 'O' && vis[i][0] == 0) {

                  dfs(  i , 0 , vis , board);

              }

              if( board[i][m - 1] == 'O' && vis[i][m - 1] == 0) {

                  dfs( i , m - 1 , vis , board );

              }
          }

          for( int row = 0 ; row < n  ; row++) {

              for ( int col = 0 ; col < m  ; col++ ) {

                  if( board[row][col ] =='O' && vis[row][col] == 0) {

                      board[row][col] = 'X';

                  }
              }
          }

          
        
    }
};