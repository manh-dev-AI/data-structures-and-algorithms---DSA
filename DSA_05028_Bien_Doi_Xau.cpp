#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;

        int n = s1.size();
        int m = s2.size();

        int dp[n + 1][m + 1];


        for(int i = 0; i <= n; i++) dp[i][0] = i;
        for(int j = 0; j <= m; j++) dp[0][j] = j;

        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= m;j++){
                if(s1[i - 1] == s2[j - 1]){
                    dp[i][j] = dp[i-1][j-1];
                } //dp[i][j] là số cách sưa ít nhất để s1 giống s2 , vì nó là bất kỳ nên mình ko cần care index
                else {
                    dp[i][j] = min({
                        dp[i-1][j-1] + 1, // replace
                        dp[i-1][j] + 1,   // delete
                        dp[i][j-1] + 1    // insert
                    });
                }
            }
        }

        cout << dp[n][m] << "\n";
    }
    return 0;
}