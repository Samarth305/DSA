
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> dfs(int v,vector<int> adjlist[]){
    queue<int> q;
    q.push(0);
    vector<bool> visited(v,0);
    visited[0]=1;
    vector<int> ans;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int i=0;i<adjlist[node].size();i++){
            if(visited[adjlist[node][i]]==0){
                visited[(adjlist[node][i])]=1;
                q.push(adjlist[node][i]);
            }
        }
    }
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

}

