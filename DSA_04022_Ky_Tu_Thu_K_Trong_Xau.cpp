#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;long long k;
        cin >> n >> k;
        int tmp;
        for(int i = n;i >= 1;i--){
            long long r = pow(2 , i - 1);
            if(r == k){
                tmp = i;
                break;
            }
            if(k > r){
                k -= r;
            }
        }
        char r = 'A' + tmp - 1;
        cout << r << "\n";
    }
    return 0;
}