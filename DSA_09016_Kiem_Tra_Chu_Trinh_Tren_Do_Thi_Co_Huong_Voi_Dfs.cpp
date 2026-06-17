#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a[1001];
vector<int> visited(1001);
vector<int> color(1001);

bool dfs(int u){
    color[u] = 1;
    for(int v : a[u]){
        if(color[v] == 1){
            return true;
        }
        if(color[v] == 0){
            if(dfs(v)){
                return true;
            }
        }
    }
    color[u]=  2;
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
        fill(color.begin() , color.end() , 0);
        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            a[u].push_back(v);
        }

        bool ok = false;

        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                if(dfs(i)){
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}