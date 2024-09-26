class Solution {
public:


              void dfs( vector<int> isConnected[] , int vis[] , int s) {

                  vis[s] = 1;
                  for(auto it : isConnected[s]) {

                      if(vis[it ] == 0)
                      {
                           dfs( isConnected , vis , it);
                      } 
                  }
              }
    int findCircleNum(vector<vector<int>>& isConnected) {


          

        int v  = isConnected.size();
        vector<int> adjls[v + 1] ;
        for( int i = 0; i < v ;i++) {
            for( int j = 0 ; j < v ;j++) {
                if( isConnected[i][j] == 1 && i != j) {
                    adjls[i + 1].push_back(j + 1);
                 
                }
            }
        }
         int vis[v  + 1 ];

         for( int i = 0 ;i <= v; i++) {
             vis[i] = 0;

         }

        int cnt = 0;

        for( int i = 1; i<=v; i++) {
            if( vis[i] == 0) {

                cnt++;
                dfs( adjls, vis , i );
            }
        }
        return cnt;


        
    }
};