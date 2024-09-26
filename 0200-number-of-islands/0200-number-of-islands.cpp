class Solution {
public:

    void bfs(vector<vector<char>>&grid , vector<vector<int>>&vis ,  int row , int col , int n , int m ){

        queue<pair<int ,int >> q;
        q.push({row, col});
        vis[row][col] = 1;
        while(q.empty()== false){
               vector<int>row1 = { -1 , 0 , 1 , 0};
               vector<int>col1 = {0 , 1 , 0 , -1};
               int newrow = q.front().first;
               int newcol = q.front().second;
               q.pop();
               for(int i = 0 ;i < 4 ;i++){

                int finrow = newrow + row1[i];
                int fincol = newcol + col1[i];
                if(finrow>=0 && finrow<n && fincol >=0 && fincol < m && grid[finrow][fincol] ==  '1' && vis[finrow][fincol] == 0  ){
                    vis[finrow][fincol] = 1;
                    q.push({ finrow , fincol});
                }


               }
        }
    }     
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n , vector<int>(m , 0));
        int cnt=0;
        for(int i = 0; i<n;i++){
            for(int j = 0 ;j < m ;j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    cnt++;
                    vis[i][j] = 1;
                    int row = i;
                    int col = j;
                    bfs(grid , vis , row , col ,   n , m  );

                }
            }
        }
        return cnt;
        
    }
};