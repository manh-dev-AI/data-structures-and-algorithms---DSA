#include <bits/stdc++.h>
using namespace std;

int parent[1005];

int find(int u){
    while(u != parent[u]){
        u = parent[u];
    }
    return u;
}

void Union(int u, int v){
    u = find(u);
    v = find(v);

    if(u != v){
        parent[v] = u;
    }
}

int main(){
    int T;
    cin >> T;

    while(T--){
        int n, m;
        cin >> n >> m;


        for(int i = 1; i <= n; i++){
            parent[i] = i;
        }


        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;

            Union(u, v);
        }

        int q;
        cin >> q;

        while(q--){
            int x, y;
            cin >> x >> y;

            if(find(x) == find(y)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }

    return 0;
}