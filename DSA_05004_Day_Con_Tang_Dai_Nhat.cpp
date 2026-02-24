#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int dp[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
        dp[i] = 1;
    }
    int MAX = INT_MIN;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i;j++){
            if(a[j] < a[i]){
                dp[i] = max(dp[i] , dp[j] + 1);
            }
            
        }
        MAX = max(MAX , dp[i]);
    }
    cout << MAX << "\n";
    return 0;
}