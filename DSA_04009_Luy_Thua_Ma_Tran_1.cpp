#include <bits/stdc++.h>

using namespace std;

long long n;
long long MOD = 1e9 + 7;

struct Matrix{
    long long f[101][101];
    Matrix (){
        for(int i = 0;i < 101;i++){
            for(int j = 0;j < 101;j++){
                f[i][j] = 0;
            }
        }
    }
};
Matrix nhan(Matrix A,Matrix B){
    Matrix C;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            for(int k = 0;k < n;k++){
                C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] ) % MOD;
            }
        }
    }
    return C;
}
Matrix power(Matrix A ,long long k){
    if(k  == 1){
        return A;
    }
    Matrix res = power(A , k/2);
    if(k % 2 ==0 ){
        return nhan(res , res);
    }
    else {
        return nhan(A , nhan(res , res));
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> n >> k;
        Matrix A;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin >> A.f[i][j];
            }
        }
        Matrix ans = power(A , k);
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cout << ans.f[i][j] << " ";
            }
            cout << "\n";
        }

    }
    return 0;
}