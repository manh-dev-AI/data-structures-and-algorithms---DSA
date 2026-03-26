#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , s;
        cin >> n >> s;
        int a[n + 1];
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        int dp[s + 1];
        dp[0] = 1;
        for(int i = 1;i <= s;i++){
            dp[i] = 0;
        }
        for(int i = 1;i <= n;i++){
            for(int j = s;j >= a[i];j--){
                if(dp[j] || dp[j - a[i]]){
                    dp[j] = 1;
                }
            }
        }
        if(dp[s]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}