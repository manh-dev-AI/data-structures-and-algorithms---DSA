#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, p;
        cin >> n >> m >> p;

        string A, B, C;
        cin >> A >> B >> C;

        int dp[101][101][101];
        memset(dp , 0 , sizeof(dp));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                for (int k = 1; k <= p; k++) {
                    if (A[i-1] == B[j-1] && B[j-1] == C[k-1]) {
                        dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                    } else {
                        dp[i][j][k] = max({
                            dp[i-1][j][k],
                            dp[i][j-1][k],
                            dp[i][j][k-1]
                        });
                    }
                }
            }
        }

        cout << dp[n][m][p] << "\n";
    }
}