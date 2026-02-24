#include <bits/stdc++.h>

using namespace std;

bool snt(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ok = true;
        for(int i = 2;i <= n/2;i++){
            if(snt(i) && snt(n-i)){
                if( i < n-i){
                    cout << i << " " << n-i << "\n";
                    ok = false;
                    break;
                }
                else {
                    cout << n-i << " " << i << "\n";
                    ok = false;
                    break;
                }
            }
        }
        if(ok){
            cout << "-1\n";
        }
    }
    return 0;
}