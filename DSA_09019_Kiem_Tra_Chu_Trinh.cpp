#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a[1001];
vector<int> visited(1001);

bool dfs(int u, int parent){
    visited[u] = 1;

    for(int v : a[u]){
        if(!visited[v]){
            if(dfs(v, u))
                return true;
        }
        else if(v != parent){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        cin >> n >> m;

        for(int i = 1; i <= n; i++){
            a[i].clear();
        }

        fill(visited.begin(), visited.end(), 0);

        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }

        bool ok = false;

        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                if(dfs(i, -1)){
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}