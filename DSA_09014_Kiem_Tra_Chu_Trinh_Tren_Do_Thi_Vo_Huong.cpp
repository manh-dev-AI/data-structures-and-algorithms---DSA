#include <bits/stdc++.h>
using namespace std;

int parent[1001];

int find(int u){
    if(parent[u] == u) return u;
    return parent[u] = find(parent[u]); 
}

void union1(int u, int v){
    u = find(u);
    v = find(v);

    if(u != v){
        parent[v] = u;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        for(int i = 1; i <= n; i++){
            parent[i] = i;
        }

        bool cycle = false;

        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;

            if(find(u) == find(v)){
                cycle = true;
            }
            else{
                union1(u, v);
            }
        }

        cout << (cycle ? "YES" : "NO") << '\n';
    }

    return 0;
}