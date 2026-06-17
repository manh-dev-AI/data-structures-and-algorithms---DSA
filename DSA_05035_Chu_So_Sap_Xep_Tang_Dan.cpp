#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;
// dp[i][j] : có bao nhiêu cách tạo dãy có độ dài i kết thúc = j
// dp[i][j]=dp[i−1][0]+dp[i−1][1]+...+dp[i−1][j]
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dp[n + 1][10];
        memset(dp , 0 , sizeof(dp));
        for(int i = 0;i < 10;i++){
            dp[1][i] = 1;
        }
        for(int i = 2;i <= n;i++){
            for(int j = 0;j < 10;j++){
                for(int k = 0;k <= j;k++){
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                }
            }
        }
        long long ans = 0;
        for(int i = 0;i <= 9;i++){
            ans = (ans + dp[n][i]) % MOD;
        }
        cout << ans << "\n";
    }
    return 0;
}