#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        int dp[n + 1];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int MAX = INT_MIN;
        for(int i = 0;i < n;i++){
            dp[i] = 1;
            for(int j = 0;j < i;j++){
                if(a[j] <= a[i]){
                    dp[i] = max(dp[i] , dp[j] + 1);
                }
            }
            MAX = max(MAX , dp[i]);
        }
        cout << n - MAX << "\n";
    }
    return 0;
}