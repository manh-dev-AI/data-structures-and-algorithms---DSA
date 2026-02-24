#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9+ 7;

long long power(long long a,long long b){
    long long res = 1;
    if(b == 0){
        return 1;
    }

    long long t = power(a , b/2);
    res = (t * t) % MOD;
    if(b % 2 == 1){
        res = (res * a) % MOD;
    }
    return res % MOD;

}
long long rev(long long n){
    long long a = 0;
    while(n > 0){
        a = a * 10 + n % 10;
        n /= 10;
    }
    return a;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long r = rev(n);
        long long ans = power(n  , r);
        cout << ans << "\n";
    }
    return 0;
}