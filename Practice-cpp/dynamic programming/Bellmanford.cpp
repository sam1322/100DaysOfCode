#include<bits/stdc++.h>
using namespace std ;

int inf = 0x3f3f3f3f;
// struct Edge{
//     int src , dest , weight; 
// };

class Graph{
    public:
    vector<vector<pair<int,int>>> adj; 

    // Graph(vector<Edge> &edge,int n){
    Graph(vector<vector<int>> &edge,int n){
        adj.resize(n) ;

        for(auto &i : edge){
            // adj[i.src].push_back(make_pair(i.dest,i.weight)) ;
            adj[i[0]].push_back({i[1],i[2]}) ;
            // cout<<"Src "<<i.src<<" Dest "<<adj[i.src].back().first<< " weight "<<adj[i.src].back().second<<endl; 
            // adj[i.dest].push_back(make_pair(i.src,i.weight)) ;
        } 
    }  


};

void Bellmanford(Graph &graph, int N , int src )
{
    vector<int>dist(N,INT_MAX) ; 
    dist[src]=0 ; 
    for(int i = 0 ;  ; i++){
        int f = 0 , u =0 ; 
        for(auto &x : graph.adj ){
            for(int j = 0 ; j<x.size() ; j++){
                if(dist[u] + x[j].second < dist[x[j].first]){
                    dist[x[j].first] = dist[u] + x[j].second  ; 
                    f= 1 ; 
                }
                // cout<<"u "<<dist[u]<<" uv weight "<<x[j].second<<" "<<x[j].first<<" "<<dist[x[j].first]<<endl;
            }
            u++;
        }
        if(!f)break;

        if(i>=N){
            cout<<"Negative weight cycle detected \n" ; return ; 
        }
    }
    cout<<"Vertex\tDistance from source vertex\n" ;
    for(int i = 0 ;i <dist.size() ;i++){
        cout<<i<<"\t " <<dist[i]<<endl;
    }

}
void Bellmanford(vector<vector<int>> &edge ,int V , int src)
{
    int E = edge.size();
    // Step 1: Initialize distances from src to all other
    // vertices as INFINITE
    vector<int> dist(V,inf) ;
 
    dist[src]= 0;
 
    // Step 2: Relax all edges |V| - 1 times. A simple
    // shortest path from src to any other vertex can have
    // at-most |V| - 1 edges
    for (int i = 1; i <= V - 1; i++) {
        int  f = 0;
        for (int j = 0; j < E; j++) {
            int u = edge[j][0];
            int v = edge[j][1];
            int weight = edge[j][2];
            if (dist[u] != inf && dist[u] + weight < dist[v])
                {dist[v] = dist[u] + weight; f=1;}
        }
        if(!f) break ;
    }
 
    // Step 3: check for negative-weight cycles.  The above
    // step guarantees shortest distances if graph doesn't
    // contain negative weight cycle.  If we get a shorter
    // path, then there is a cycle.
    for (int i = 0; i < E; i++) {
            int u = edge[i][0];
            int v = edge[i][1];
            int weight = edge[i][2];
        if (dist[u] != inf   && dist[u] + weight < dist[v]) {
            printf("Graph contains negative weight cycle");
            return; // If negative cycle is detected, simply
                    // return
        }
    }

    cout<<"Vertex\tDistance from source vertex\n" ;
    for(int i = 0 ;i <dist.size() ;i++){
        cout<<i<<"\t " <<dist[i]<<endl;
    }
}

int main(){

    vector<vector<int>>  edge = {
        {0,1,6},
        {0,2,5},
        {0,3,5},
        {1,4,-1},
        {1,2,-2},
        {3,5,-1},
        {2,4,1},
        {5,6,3},
        {4,6,3}
    } ;
    int N = 7  ; 
    Graph graph(edge,N) ; 
    // cout<<"What should be the source \n" ; 
    int src = 0 ; 
    // cin>>src ;

    Bellmanford(edge,N,src) ;
    Bellmanford(graph , N ,src ) ; 
    
    

}