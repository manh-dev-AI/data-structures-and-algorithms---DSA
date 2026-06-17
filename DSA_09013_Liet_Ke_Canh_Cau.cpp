#include <bits/stdc++.h>
using namespace std;

int n , m;
bool visited[1005];
vector<int> adj[1005];
vector<pair<int,int>> edges;

void DFS(int u,int s,int t){
    visited[u] = true;
    for(int v : adj[u]){
        if((u == s && v == t) || (u == t && v == s)) continue;
        if(!visited[v]){
            DFS(v , s , t);
        }
    }
}

int tplt(int s = -1 , int t = -1){
    memset(visited , false , sizeof(visited)); 
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if(!visited[i]){
            cnt++;
            DFS(i , s , t);
        }
    }
    return cnt;
}

void canhcau(){
    int cc = tplt(); 

    for(auto e : edges){
        int s = e.first;
        int t = e.second;

        if(tplt(s , t) > cc){
            cout << s << " " << t << " ";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        edges.clear();

        cin >> n >> m;


        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }

        for(int i = 0;i < m;i++){
            int u , v;
            cin >> u >> v;
            edges.push_back({u , v});
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        canhcau();
        cout << "\n";
    }
    return 0;
}