#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-1 , -2 , -2 , -1 , 1 , 2 , 2 , 1};
int dy[8] = {-2 , -1 , 1  ,  2 , 2 , 1 ,-1 ,-2};

bool visited[9][9];

void bfs(int x1,int y1,int x2,int y2){
    queue<pair<pair<int,int>,int>> qu;
    qu.push({{x1 , y1} , 0});
    visited[x1][y1] = true;
    while(!qu.empty()){
        auto x = qu.front();
        qu.pop();

        if(x.first.first == x2 && x.first.second == y2){
            cout << x.second << "\n";
            return;
        }
        for(int k = 0;k < 8;k++){
            int nx = x.first.first + dx[k];
            int ny = x.first.second + dy[k];
            if(!visited[nx][ny] && nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8){
                visited[nx][ny] = true;
                qu.push({{nx , ny } , x.second+1});
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        if(s1 == s2){
            cout << "0\n";
            continue;
        }
        int x1 = 8 - (s1[1] - '0') + 1;
        int y1 = s1[0] - 'a' + 1;
        int x2 = 8 - (s2[1] - '0') + 1;
        int y2 = s2[0] - 'a' + 1;
        for(int i = 1;i <= 8;i++){
            for(int j = 1;j <= 8;j++){
                visited[i][j] = false;
            }
        }
        bfs(x1 , y1,x2,y2);
    }
    return 0;
}