#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<int>> adjmat(vertex,vector<int>(vertex,0));
    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        adjmat[u][v]=weight;
        adjmat[v][u]=weight;
    }
    cout<<endl;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
}

