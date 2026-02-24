#include <bits/stdc++.h>

using namespace std;

long long f[93];
void fibo(){
    f[1] = 1;
    f[0] = 0;
    for(int  i = 2;i <= 92;i++){
        f[i] = f[i-1] + f[i-2];
    }
}

int main(){
    fibo();
    int t;
    cin >> t;
    while(t--){
        int n;long long k;
        cin >> n >> k;
        while(n > 2){
            if(k > f[n-2]){
                k -= f[n-2];
                n -= 1;
            }
            else {
                n -= 2;
            }
        }
        if(n == 1){
            cout << 0 << "\n";
        }
        else {
            cout << 1 << "\n";
        }
    }
    return 0;
}