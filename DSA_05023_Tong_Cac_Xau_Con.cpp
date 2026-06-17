#include <bits/stdc++.h>

using namespace std;
/*
giải thích test case
1234
dp[1] = 1
dp[2] = 2 12
dp[3] = 3 23 123
dp[4] = 4 34 234 1234
dp[i] là tổng các phần tử có vị trí kết thúc là 
chứng minh công thức, dp[i] = dp[i-1]*10 + s[i] * i
vd tổng số phần từ kết thúc = 2 là 14 thì 
mà phần tử kết thúc = 3 sẽ là kết thúc = 2 *10 + số lượng phần tử 3 
*/
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        long long ans = 0;
        long long dp[n + 1] = {0};
        dp[0] = s[0] - '0';
        ans += dp[0];
        for(int i = 1;i < n;i++){
            dp[i] = dp[i-1]*10 + (s[i] - '0')*(i + 1);
            ans += dp[i];
        }
        cout << ans << "\n";
    }
    return 0;
}