#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int dp[n + 1];
        dp[0] = a[0];
        int MAX = INT_MIN;
        for(int i = 1;i < n;i++){
            dp[i] = max(a[i] ,a[i] + dp[i-1]);
            MAX = max(dp[i] , MAX);
        }
        cout << MAX << "\n";
    }
    return 0;
}