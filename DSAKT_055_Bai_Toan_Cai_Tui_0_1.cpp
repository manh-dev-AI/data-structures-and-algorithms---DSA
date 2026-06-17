#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , b;
        cin >> n >> b;
        int w[n + 1];
        int v[n + 1];
        int dp[b + 1];
        for(int i = 1;i <= n;i++){
            cin >> w[i];
        }
        for(int i = 1;i <= n;i++){
            cin >> v[i];
        }
        for(int i = 0;i <= b;i++){
            dp[i] = 0;
        }
        for(int i = 1;i <= n;i++){
            for(int j = b;j >= w[i];j--){
                dp[j] = max(dp[j] , dp[j - w[i]] + v[i]);
            }
        }
        cout << dp[b] << "\n";
    }
    return 0;
}