#include <bits/stdc++.h>

using namespace std;

void bfs(int s, int t){
    vector<int> visited(20001, 0);

    queue<pair<int,int>> q;
    q.push({s,0});
    visited[s] = 1;

    while(!q.empty()){
        auto [u,step] = q.front();
        q.pop();

        if(u == t){
            cout << step << "\n";
            return;
        }

        if(u * 2 <= 20000 && !visited[u * 2]){
            visited[u * 2] = 1;
            q.push({u * 2, step + 1});
        }

        if(u - 1 >= 0 && !visited[u - 1]){
            visited[u - 1] = 1;
            q.push({u - 1, step + 1});
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int s , t;
        cin >> s >> t;
        bfs(s , t);
    }
    return 0; 
}