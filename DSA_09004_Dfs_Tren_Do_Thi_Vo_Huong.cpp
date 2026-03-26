#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 6;
vector<int> a[MAX + 1];
bool visited[MAX + 1];

void dfs(int u) {
    visited[u] = true;
    cout << u << " "; 
    for(int v : a[u]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
        int n, m , u; 
        cin >> n >> m >> u;


        for(int i = 1; i <= n; i++) {
            a[i].clear();
            visited[i] = false;
        }


        for(int i = 0; i < m; i++) {
            int q, p;
            cin >> q >> p;
            a[p].push_back(q);
            a[q].push_back(p); 
        }


        dfs(u);
        cout << "\n";
    }
    return 0;
}