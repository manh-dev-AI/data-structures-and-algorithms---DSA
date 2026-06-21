#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
            a[i] %= k;
        }
        //gia tri a luc nay chi con tu 0--> k
        vector<int> dp(k, -1e9);
        dp[0] = 0;

        for(int i = 1; i <= n; i++){
            vector<int> ndp = dp;

            for(int r = 0; r < k; r++){
                if(dp[r] < 0) continue;

                int nr = (r + a[i]) % k; // xet tai nr xem neu them a[i] thi co bao nhieu cach chon nr 
                ndp[nr] = max(ndp[nr], dp[r] + 1); // neu tim max
            }

            dp = ndp;
        }

        cout << dp[0] << '\n';
    }
}