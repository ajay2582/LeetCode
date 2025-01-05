class Solution {
public:
    void dfscall( int start , vector<vector<int>> &adj , vector<int>&vis){

        vis[start] =1 ;
        for(auto it : adj[start]){
            if(vis[it] == -1){
                dfscall(it , adj , vis);
            }
        }

    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int k = n+1;
        vector<vector<int>>adj(k);
        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ; j < n;j++){
                if(isConnected[i][j] == 1 && i != j){
                    adj[i+1].push_back(j+1);
                    adj[j+1].push_back(i+1);
                }
            }
        }

        int cnt = 0;
        vector<int>vis(n+1 , -1);

        for(int i = 1 ; i <= n;i++){

            if(vis[i] == -1) {

                cnt++;
                dfscall(i,adj,vis );
            }
        }


        return cnt;
        
        
    }
};