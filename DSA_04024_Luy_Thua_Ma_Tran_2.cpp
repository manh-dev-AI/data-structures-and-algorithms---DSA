#include <bits/stdc++.h>

using namespace std;

int n;
long long MOD = 1e9+7;

struct Matrix{
    long long f[11][11];
    Matrix () {
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                f[i][j] = 0;
            }
        }
    }
};
Matrix multiply(Matrix A,Matrix B){
    Matrix C;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            for(int k = 0;k < n;k++){
                C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j]) % MOD;
            }
        }
    }
    return  C;
}
Matrix power(Matrix A,long long k){
    if(k == 1){
        return A;
    }
    Matrix res = power( A,k / 2);
    if(k % 2 == 0){
        return multiply(res , res);
    }
    else {
        return multiply(multiply(res , res) , A);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        long long k;
        cin >> n >> k;
        Matrix A;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin >> A.f[i][j];
            }
        }
        Matrix ans = power(A , k);
        long long res = 0;
        for(int i = 0;i < n;i++){
            res += ans.f[i][n-1];
        }
        res %= MOD;
        cout << res << "\n";
    }
    return 0;
}