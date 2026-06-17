#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        long long dp[n + 1];
        long long ans = 0;
        for(int i = 1;i <= n;i++){
            dp[i] = a[i];
            for(int j = 1;j < i;j++){
                if(a[i] > a[j]){
                    dp[i] = max(dp[i] , dp[j] + a[i]);
                }
            }
            ans  = max(ans , dp[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}