#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        //ADJ list
        vector<vector<int>> graph(n);
        for(int i=0;i<edges.size();i++){
            int src= edges[i][0];
            int dest= edges[i][1];
            

            graph[src].push_back(dest);
            graph[dest].push_back(src);
        }
        vector<bool>vis(n,false);
        return dfs(graph,source,destination,vis);
    }
        bool dfs(vector<vector<int>> graph,int src,int destination,vector<bool>vis){
            if(src==destination){
                return true;
            }
            vis[src]=true;
            for(int i=0;i<graph[src].size();i++){
                int dest=graph[src][i];
                if(!vis[dest]){
                   if (dfs(graph,dest,destination,vis)){
                    return true;
                   }

                }
            }
            return false;

        }
        
    
};