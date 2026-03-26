#include <bits/stdc++.h>
using namespace std;

int n;
int x[100];
bool visited[100];
long long c[100][100];

long long cost, res;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!visited[j]){ // ✅ FIX
            x[i] = j;
            visited[j] = true;
            cost += c[x[i - 1]][j];

            if(i == n){
                res = min(res, cost);
            } else {
                Try(i + 1);
            }

            visited[j] = false;
            cost -= c[x[i - 1]][j];
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;

        res = LLONG_MAX;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> c[i][j];
            }
        }

        for(int start = 1; start <= n; start++){
            memset(visited, false, sizeof(visited));
            cost = 0;

            x[1] = start;
            visited[start] = true;

            Try(2);
        }

        cout << res << endl;
    }
    return 0;
}