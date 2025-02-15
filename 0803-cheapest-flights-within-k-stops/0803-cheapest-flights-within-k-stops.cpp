class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<pair <  int , int > > adj[n];

        for ( auto it: flights )  {


            adj[it[0]].push_back( { it[1] , it[2]});

        }
        vector<int> dist( n , 1e9);

        dist[src] = 0 ; 


           queue<pair< int , pair< int , int > >> q;

           //      { stops , { node , distance  }}
                   q.push({ 0 , {  src  , 0 }});


                   while( q.empty() == false) {


                       auto it = q.front();

                            q.pop();
                             int stop = it.first;

                            int  node =  it.second.first;
                            int   len = it.second.second;
                            if(stop> k){
                                continue;
                            }

                           
                            for ( auto it : adj[node]) {

                               int adjnode = it.first;
                               int weight = it.second ;

                               if(  len +  weight < dist[adjnode]  && stop <= k ) {

                                   dist[adjnode ] = len + weight;


                                   q.push({ stop + 1 , {  adjnode , len + weight}});


                                        
                                   
                               }


                            }
                   }






        if( dist[dst] == 1e9 ) {

            return -1 ;

        }

        return dist[dst];




        
         
        


    }
};