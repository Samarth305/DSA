
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<pair<int,int>> adjlist[vertex];
    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        adjlist[u].push_back(make_pair(v,weight));
        adjlist[v].push_back(make_pair(u,weight));
    }
    cout<<endl;
    for(int i=0;i<vertex;i++){
        cout<<i<<" -> ";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j].first<<"-"<<adjlist[i][j].second<<" ";
        }
        cout<<endl;
    }

}
