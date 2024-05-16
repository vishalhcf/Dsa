#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class solution{
    public:
    void bfs(vector<vector<int>> list,int st){
        int n=list.size();
        bool vis[list.size()];
        for(int i=0;i<n;i++){
            vis[i]=false;
        }
        queue<int>q;
        vis[st]=true;
        q.push(st);

        while(!q.empty()){
            int crr=q.front();
            q.pop();
            cout<<crr<<" ";
            for(int i:list[crr]){
                if(vis[i]==false){
                    q.push(i);
                    vis[i]=true;
                }
            }

        }
    }
};