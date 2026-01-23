#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>>adj;
    
    void adjEdges(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    

};

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int>arr;
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }

    Graph g;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.adjEdges(u, v);
    }
}