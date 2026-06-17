#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];
int n, m;
int bac[1005];

void dfs(int u){
    visited[u] = true;

    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){

        cin >> n >> m;


        memset(visited, false, sizeof(visited));
        memset(bac, 0, sizeof(bac));

        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }


        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);

            bac[u]++;
            bac[v]++;
        }


        int begin = 1;

        while(begin <= n && bac[begin] == 0){
            begin++;
        }


        if(begin <= n){
            dfs(begin);
        }


        bool ok = true;

        for(int i = 1; i <= n; i++){
            if(bac[i] > 0 && !visited[i]){
                ok = false;
                break;
            }
        }

        if(!ok){
            cout << "0\n";
            continue;
        }


        int le = 0;

        for(int i = 1; i <= n; i++){
            if(bac[i] % 2 != 0){
                le++;
            }
        }


        if(le == 0){
            cout << "2\n"; 
        }
        else if(le == 2){
            cout << "1\n"; 
        }
        else{
            cout << "0\n";
        }
    }

    return 0;
}