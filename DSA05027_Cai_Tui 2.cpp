#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , V;
        cin >> n >> V;
        int a[n + 1] , c[n + 1];
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        for(int i = 1;i <= n;i++){
            cin >> c[i];
        }
        int dp[V + 1] = {0};
        for(int i = 1;i <= n;i++){
            for(int j = V;j >= a[i];j--){
                dp[j] = max(dp[j] , dp[j - a[i]] + c[i]);
            }
        }
        cout << dp[V] << "\n";
    }
    return 0;
}