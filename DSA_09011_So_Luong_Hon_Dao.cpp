#include <bits/stdc++.h>

using namespace std;

// int dx[4] = {-1 , 1 , 0 , 0};
// int dy[4] = {0 , 0 , -1 , 1}; 4 huong

int dx[8] = {-1 , 1 , 0 , 0,-1,-1 , 1 , 1};
int dy[8] = {0 , 0 , -1 , 1,-1, 1 ,-1 , 1};

int a[505][505];
int visited[505][505];
int n , m;

void dfs(int x,int y){

    visited[x][y] = 1;

    for(int k = 0;k < 8;k++){
        int nx = x + dx[k];
        int ny = y + dy[k];

        if(nx >= 1 && ny >= 1 && nx <= n && ny <= m && a[nx][ny] == 1 && !visited[nx][ny]){
            dfs(nx , ny);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= m;j++){
                cin >> a[i][j];
                visited[i][j] = 0;
            }
        }
        int cnt = 0;
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= m;j++){
                if(a[i][j] == 1 && !visited[i][j]){
                    cnt++;
                    dfs(i , j);
                }
            }
        }
        cout << cnt << "\n";

    }
    return 0;
}