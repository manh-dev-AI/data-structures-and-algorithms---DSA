#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , V;
        cin >> n >> V;
        int a[n + 1] , c[n + 1];
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        for(int i = 1;i <= n;i++){
            cin >> c[i];
        }

        int dp[n + 1][V + 1];// gia tri su dung tai vitri [i][j] voi i la chon do vat do , j la khoi luong 
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= V; j++) dp[i][j] = 0;
        }
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= V;j++){
                dp[i][j] = dp[i-1][j];
                if(j - a[i] >= 0){
                    dp[i][j] = max(dp[i][j] , dp[i - 1][j - a[i]] + c[i]);
                }
            }
        }
        cout << dp[n][V] << "\n";
    }
    return 0;
}