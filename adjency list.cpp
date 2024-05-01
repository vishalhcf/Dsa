#include <iostream>
#include <vector>
using namespace std;

class Graph{

   public:
    void adjList(vector<vector<int>> edges,int v){

        // ADJ LIST
        vector<vector<int>>  graph(v);
        for(int i=0; i<edges.size();i++){
              int src=edges[i][0];
              int dest=edges[i][1];

              graph[src].push_back(dest);
              graph[dest].push_back(src);
        }

        // PRINTING
        for(int i=0;i<graph.size();i++){
               for(int x: graph[i]){
                   cout<< i <<" -> "<< x<<", ";
               }
               cout<<endl;
        }

    }
    
};

int main(){

    vector<vector<int>> edges={{0,1},{0,2},{1,4},{2,4},{2,3},{4,3},{4,5},{5,3}};
    int v=6;

    Graph gh;
    gh.adjList(edges,v);


    return 0;
}