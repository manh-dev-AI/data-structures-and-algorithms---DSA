#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool visited[1005];
int n;

bool hamilton(int u,int cnt){
    if(cnt == n){
        return true;
    }
    for(int v : adj[u]){
        if(!visited[v]){
            visited[v] = true;

            if(hamilton(v , cnt + 1)){
                return true;
            }
            visited[v] = false;
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> n >> m;
        for(int i = 1;i <= n;i++){
            adj[i].clear();
            visited[i] = false;
        }
        for(int i = 0;i < m;i++){
            int u , v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool cycle = false;
        for(int i = 1;i <= n;i++){
            memset(visited , false , sizeof(visited));
            visited[i] = true;
            if(hamilton(i , 1)){
                cycle = true;
                break;
            }
        }
        cout << (cycle ? 1 : 0) << "\n";
    }
}

