class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& prerequisites) {
         vector<int>adj[V];
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);

        }

        int indegree[V];
         for(int i = 0 ;i <V;i++){
            indegree[i] = 0;
         }
        for(int i = 0 ;i <V;i++){
            for(auto it : adj[i]){
                indegree[it]++;
            }

               

        }
        queue<int>q;
        for(int i = 0 ;i < V;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int>ans;
           
        while(q.empty() == false){
            int node  = q.front();
           ans.push_back(node);
            q.pop();
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }

        }
        if(ans.size() == V){
            return ans;
        }
         vector<int>emp;
         return emp;

        
    }
};