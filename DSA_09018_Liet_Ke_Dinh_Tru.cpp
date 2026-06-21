#include <bits/stdc++.h>

using namespace std;

vector<int> a[1005];
int n , m;
bool visited[1005];

void dfs(int u){
    visited[u] = true;
    for(int v : a[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int tplt(){
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if(!visited[i]){
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}

void dinhtru(){
    fill(visited , visited + n + 1, false);
    int so_d = tplt();
    for(int i = 1;i <= n;i++){
        fill(visited , visited + n + 1,false);
        visited[i] = true;
        if(tplt() > so_d){
            cout << i << " ";
        }
    }
    cout << " \n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1;i <= n;i++){
            visited[i] = false;
            a[i].clear();
        }
        for(int i = 0;i < m;i++){
            int u , v;
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        dinhtru();
    }
    return 0;
}