#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        for(int i = 0;i < n;i++){
            dp[i][i] = 1;
        }
        int ans = 1;
        for(int len = 2;len <= n;len++){
            for(int i = 0;i  + len - 1 < n;i++){
                int j = i + len - 1;
                if(s[i] == s[j]){
                    if(len == 2) dp[i][j] = 1;
                    else dp[i][j] = dp[i + 1][j-1];

                    
                }
                if(dp[i][j]){
                    ans = max(ans , len);
                }
                
            }
        }
        cout << ans << "\n";
    }
    return 0;
}