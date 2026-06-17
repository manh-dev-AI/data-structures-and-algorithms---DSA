#include <bits/stdc++.h>
using namespace std;

int n;
string a[105];
int dist[105][105];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int BFS(int sx, int sy, int tx, int ty){
    memset(dist, -1, sizeof(dist));

    queue<pair<int,int>> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;

    while(!q.empty()){
        auto [x, y] = q.front(); q.pop();

        if(x == tx && y == ty){
            return dist[x][y];
        }


        for(int k = 0; k < 4; k++){
            int nx = x;
            int ny = y;

    
            while(true){
                nx += dx[k];
                ny += dy[k];

              
                if(nx < 0 || nx >= n || ny < 0 || ny >= n) break;
                if(a[nx][ny] == 'X') break;


                if(dist[nx][ny] == -1){
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    return -1; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int sx, sy, tx, ty;
        cin >> sx >> sy >> tx >> ty;

        cout << BFS(sx, sy, tx, ty) << endl;
    }
}