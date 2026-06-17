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
        int dp[n + 1] = {0};
        dp[1] = a[1];
        for(int i = 2;i <= n;i++){
            dp[i] = max(a[i] + dp[i-2] , dp[i-1]);
        }
        cout << dp[n] << "\n";
    }
    return 0;
}