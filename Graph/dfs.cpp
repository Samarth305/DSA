#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs_traversal(int node,vector<int> &ans,vector<int> adj[],vector<bool> &visited){
    ans.push_back(node);
    visited[node]=1;
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]])
            dfs_traversal(adj[node][i],ans,adj,visited);
    }
}

vector<int> dfs(int vertex,vector<int> adjlist[]){
    vector<int> ans;
    vector<bool> visited(vertex,0);
    dfs_traversal(0,ans,adjlist,visited);
    return ans;

}

int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<int> adjlist[vertex];
    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    cout<<endl;
    for(int i=0;i<vertex;i++){
        cout<<i<<" -> ";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    vector<int> ans;
    ans=dfs(vertex,adjlist);
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl<<endl;
    cout<<"23CE050_SAMARTH_KACHHADIYA";
}
