#include <bits/stdc++.h>

using namespace std;

vector<int> a[1005];
vector<bool> visited(1005 , false);

void dfs(int u){
    cout << u << " ";
    visited[u] = true;
    for(int v : a[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m , k;
        cin >> n >> m >> k;
        for(int i = 1;i <= n;i++){
            a[i].clear();
            visited[i] = false;

        }
        for(int i = 0;i < m;i++){
            int u , v;
            cin >> u >> v;
            a[u].push_back(v);
        }
        dfs(k);
        cout << "\n";
    }
    return 0;
}