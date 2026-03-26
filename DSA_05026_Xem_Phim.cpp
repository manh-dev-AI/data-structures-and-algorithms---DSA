#include <bits/stdc++.h>

using namespace std;

int main(){
    int C , n;
    cin >> C >> n;
    int W[n + 1];
    for(int  i = 1;i <= n;i++){
        cin >> W[i];
    }

    int dp[C + 1] = {0}; // tại i có tổng = C hay ko
    dp[0] = 1;
    for(int i = 1;i <= n;i++){
        for(int j = C;j >= W[i];j--){
            if(dp[j - W[i]]){
                dp[j] = 1;
            }
        }
    }
    for(int i = C;i >= 0;i--){
        if(dp[i]){
            cout << i << "\n";
            break;
        }
    }
}