#include <bits/stdc++.h>

using namespace std;

int n, m;
bool visited[1005];

void dfs(int u,vector<int> a[]){
    visited[u] = true;
    for(int v : a[u]){
        if(!visited[v]){
            dfs(v , a);
        }
    }
}

bool kt(vector<int> adj[], vector<int> adj_rev[]){
    fill(visited, visited + n + 1, false);

    dfs(1, adj);

    for(int i = 1; i <= n; i++){
        if(!visited[i]) return false;
    }

    fill(visited, visited + n + 1, false);

    dfs(1, adj_rev);

    for(int i = 1; i <= n; i++){
        if(!visited[i]) return false;
    }

    return true;
}

int main (){
    int t;
    cin >> t;
    while(t--){

        cin >> n >> m;
        vector<int> adj[n + 1] , adj_rev[n + 1];
        for(int i = 1;i <= n;i++){
            visited[i] = false;
            adj[i].clear();
            adj_rev[i].clear();
        }
        for(int i = 0;i < m;i++){
            int u , v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj_rev[v].push_back(u);
        }
        if(kt(adj , adj_rev)){
            cout << "YES\n";
        }
        else cout << "NO\n";

    }
    return 0;
}