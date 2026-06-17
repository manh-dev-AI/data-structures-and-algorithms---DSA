#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n + 1] , b[n + 1];
    for(int i = 1;i <= n;i++){
        cin >> a[i] >> b[i];
    }
    vector<int> dp(n + 1 , 1);
    int ans = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j < i;j++){
            if(a[i] > a[j] && b[i] > b[j]){
                dp[i] = max(dp[i] , dp[j] + 1);
            }
        }
        ans = max(ans , dp[i]);
    }
    cout << ans << "\n";
}