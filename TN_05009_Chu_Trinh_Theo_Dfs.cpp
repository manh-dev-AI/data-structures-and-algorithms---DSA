#include <bits/stdc++.h>
using namespace std;

int n, m;
bool visited[1005];
vector<int> adj[1005];
vector<int> ans;

void dfs(int u, int parent, vector<int> path){
    visited[u] = true;

    for(int v : adj[u]){
        if(v == 1 && v != parent && ans.empty()){
            path.push_back(1);
            ans = path;
            return;
        }

        if(!visited[v]){
            path.push_back(v);
            dfs(v, u, path);
            path.pop_back();
        }
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        cin >> n >> m;

        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }

        fill(visited, visited + n + 1, false);
        ans.clear();

        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i = 1; i <= n; i++){
            sort(adj[i].begin(), adj[i].end());
        }

        dfs(1, -1, {1});

        if(ans.empty()){
            cout << "NO\n";
        }
        else{
            for(int x : ans){
                cout << x << " ";
            }
            cout << "\n";
        }
    }
}