#include <bits/stdc++.h>

using namespace std;
long long fibo[92];
void tinh(){
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3;i <= 92;i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

char calc(long long n,long long k){
    if(n == 1){
        return 'A';
    }
    if(n == 2){
        return 'B';
    }
    if(k > fibo[n - 2]){
        return calc(n - 1,k - fibo[n-2]);
    }
    else {
        return calc(n - 2, k);
    }
}

int main(){
    tinh();
    int t;
    cin >> t;
    while(t--){
        int n ;long long  k;
        cin >> n >> k;
        cout << calc(n , k) << "\n";
        
    }
    return 0;
}