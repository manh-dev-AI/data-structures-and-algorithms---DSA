#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e5 + 7;
vector<int> a[MAX];
bool visited[MAX];
int n , m;

void DFS(int u){
    visited[u] = true;
    for(int v : a[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

int tplt(){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            count++;
            DFS(i); 
        }
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i = 1;i <= n;i++){
            visited[i] = false;
            a[i].clear();
        }
        cin >> n >> m;
        for(int i = 0;i < m;i++){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cout << tplt() << "\n";
    }
    return 0;
}