class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
       vector<int> revadj[V];
       int indegree[V];
       for(int i = 0 ;i <V;i++){
        indegree[i] = 0;
       }
       for(int i = 0 ; i  < V ;i++){
        for(auto it : graph[i]){
            revadj[it].push_back(i);
            indegree[i]++;

        }
       }
       queue<int>q;
       for(int i = 0 ;i <V;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
       }
        vector<int>res;
       while(q.empty() == false){
        int node = q.front();
        q.pop();
        res.push_back(node);
        for(auto it : revadj[node]){
            indegree[it]--;
            if(indegree[it]== 0){
                q.push(it);
            }
        }

       }
       sort(res.begin(), res.end());
       return res;

        
    }
};