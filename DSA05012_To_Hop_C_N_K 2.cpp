#include <bits/stdc++.h>

using namespace std;

const long long MAX = 1005;
const long long MOD = 1e9 + 7;

long long dp[MAX][MAX];
void tinh(){
    for(int i = 0;i < MAX;i++){
        dp[i][0] = 1;
        for(int j = 1;j <= i;j++){
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
        }
    }
}
// i là n , j là k
int main(){
    tinh();
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << dp[n][k] << "\n";
    }
    return 0;
}