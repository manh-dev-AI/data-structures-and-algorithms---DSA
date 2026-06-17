// ý tưởng dùng dp 1 chiều
/*
dp[i] tại vị trí i là giá trị bé nhất để xây dựng dc i từ 
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int X , Y , Z;
        cin >> X >> Y >> Z;
        int dp[n + 1];
        memset(dp , 0 , sizeof(dp));
        dp[1] = X;
        for(int i = 2;i <= n;i++){
            dp[i] = dp[i - 1] + X;
            
            if(i % 2 == 0){
                dp[i] = min(dp[i] , dp[i/2] + Z);
            }
            else {
                dp[i] = min(dp[i] , dp[(i + 1) / 2] + Z + Y);
            }
        }
        cout << dp[n] << "\n";
    }
    return 0;
}