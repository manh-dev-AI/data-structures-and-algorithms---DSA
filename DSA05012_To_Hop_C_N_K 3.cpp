#include <bits/stdc++.h>

using namespace std;

const long long MAX = 1005;
const long long MOD = 1e9 + 7;

long long fact[MAX];
long long inv_fact[MAX];

long long power(long long a,long long b,long long mod){
    if(b == 0){
        return 1;
    }
    long long t = power(a , b/2 , mod);
    long long res = ((t % mod) * (t % mod)) % mod;
    if(b % 2 == 1){
        return ((res % mod) * (a % mod)) % mod;
    }
    return res;
}

void factorial(){
    fact[0] = 1;
    for(int i = 1;i < MAX;i++){
        fact[i] = (fact[i-1]*i) % MOD;
    }
    inv_fact[MAX - 1] = power(fact[MAX - 1] , MOD - 2, MOD);
    for(int i = MAX - 2;i >= 0;i--){
        inv_fact[i] = ( inv_fact[i + 1] * (i + 1) ) % MOD;
    }
}

int main(){
    factorial();
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long res = (((fact[n] * inv_fact[k] ) % MOD ) * inv_fact[n-k] ) % MOD;
        cout << res << "\n";
    }
    return 0;
}