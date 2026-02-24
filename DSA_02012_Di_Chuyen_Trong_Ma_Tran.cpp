#include<bits/stdc++.h>

using namespace std;

int cnt = 0;
int n,m;

void Try(int i,int j){
    if(i >= n || j >= m){
        return;
    }

    if(i == n-1 && j == m-1){
        cnt++;
        return;
    }
    Try(i + 1,j);
    Try(i , j+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int a[n][m];
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cin >> a[i][j];
            }
        }
        Try(0,0);
        cout << cnt << "\n";
        cnt = 0;
    }
    
    return 0;
}