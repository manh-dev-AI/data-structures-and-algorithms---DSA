#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1;
        cin >> s1;

        string s2 = s1;
        reverse(s2.begin(), s2.end());

        int n = s1.size();
        int dp[n+1][n+1];

        memset(dp, 0, sizeof(dp));

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        cout << n - dp[n][n] << "\n";
    }
    return 0;
}