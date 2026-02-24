#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ; long long k;
        cin >> n >> k;
        for(int i = n;i >= 1;i--){
            long long r = 1LL * pow(2 , i) / 2;
            if(r == k){
                cout << i << "\n";
                break;
            }
            if(k > r){
                k -= r;
            }
        }
    }
    return 0;
}