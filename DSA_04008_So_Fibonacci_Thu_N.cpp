// F(2k)=F(k)×[2F(k+1)−F(k)]
// F(2k+1)=F(k)^2+F(k+1)^2

#include <bits/stdc++.h>

using namespace std;
const long long MOD = 1e9 + 7;
pair<long long,long long> fibo(long long n){
    if(n == 0 ){
        return {0 , 1};
    }
    auto p = fibo(n / 2);
    long long a = p.first;
    long long b = p.second;

    long long fk = (a % MOD)*((2 * b % MOD) - a + MOD) % MOD;
    long long fk1 = ((a * a %MOD ) % MOD + (b * b % MOD) % MOD) % MOD;
    if(n % 2 == 0){
        return {fk , fk1};
    }
    else {
        return {fk1 , (fk + fk1) % MOD};
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << fibo(n).first << "\n";
    }
    return 0;
}