#include<bits/stdc++.h>

using namespace std;
const long long MOD = 1e9 + 7;
long long c(int n,int k){
    if(k == 0){
        return 1;
    }
    if(k == 1){
        return n % MOD;
    }
    if(k == n){
        return 1;
    }
    long long c1 = c(n - 1, k - 1);
    long long c2 = c(n - 1, k);
    long long tohop = (c1 % MOD + c2 % MOD) % MOD;
    return tohop;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n , k;
        cin >> n >> k;
        long long a = c(n , k);
        cout << a << "\n";
    }
    
    return 0;
}