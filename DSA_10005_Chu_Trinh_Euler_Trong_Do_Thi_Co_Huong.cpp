#include <bits/stdc++.h>

using namespace std;

int n , m;
vector<int> adj[1005];
bool visited[1005];
vector<int> rev_adj[1005];

void dfs(int u,vector<int> grap[]){
    visited[u] = true;
    for(int v : grap[u]){
        if(!visited[v]){
            dfs(v , grap);
        }
    }
}

bool ktLienThong(){
    memset(visited , false, sizeof(visited));

    dfs(1 , adj);

    for(int i = 1;i <= n;i++){
        if(!visited[i]){
            return false;
        }
    }

    memset(visited , false , sizeof(visited));

    dfs(1 , rev_adj);

    for(int i = 1;i <+ n;i++){
        if(!visited[i]){
            return false;
        }
    }
    return true;
}

bool  chuTrinhEuler(){
    if(!ktLienThong()){
        return false;
    }
    vector<int> in(n + 1 , 0);
    vector<int> out(n + 1, 0);

    for(int i = 1;i <= n;i++){
        out[i] = adj[i].size();
        for(int v  : adj[i]){
            in[v]++;
        }
    }
    for(int i = 1;i <= n;i++){
        if(in[i] != out[i]){
            return false;
        }
    }
    return  true;
}

int main(){
    int t;
    cin >> t;
    while(t--){

        cin >> n >> m;
        for(int i = 1;i <= n;i++){
            adj[i].clear();
            rev_adj[i].clear();
        }
        for(int i = 0;i < m;i++){
            int u , v;
            cin >> u >> v;
            adj[u].push_back(v);
            rev_adj[v].push_back(u);
        }
        if(chuTrinhEuler()){
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }
    }
    return 0;
}