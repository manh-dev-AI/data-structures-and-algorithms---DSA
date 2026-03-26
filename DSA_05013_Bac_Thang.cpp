#include <iostream>
#include <vector>

using namespace std;

long long M = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> dp(n + 1, 0);
    dp[0] = 1; 

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= k; j++) {
            if (i >= j) {
                dp[i] = (dp[i] + dp[i - j]) % M;
            }
        }
    }
    
    cout << dp[n] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}