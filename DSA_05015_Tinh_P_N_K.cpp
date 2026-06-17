#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
//p(n , k) = n * p(n-1,k-1)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    long long dp[1001][1001];
    memset(dp , 0 , sizeof(dp));
    for(int i = 0;i <= 1000;i++){
        dp[i][0] = 1;
    }
    for(int n = 1;n <= 1000;n++){
        for(int k = 1;k <= n;k++){
            dp[n][k] = (n * dp[n-1][k - 1]) % MOD;
        }
    }
    while(t--){
        int n , k;
        cin >> n >> k;
        cout << dp[n][k] << "\n";
    }
    return 0;
}