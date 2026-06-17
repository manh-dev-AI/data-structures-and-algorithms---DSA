#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<double> a(n + 1), b(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> a[i] >> b[i];
        }

        vector<int> dp(n + 1, 1);
        int ans = 1;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j < i; j++){
                if(a[j] < a[i] && b[j] > b[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}
// giải thích đề , tại vị trí i -- > n thì tại đó cần a tăng , và b giảm thì mới đếm