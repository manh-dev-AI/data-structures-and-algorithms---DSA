#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        long long b[n-1];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < n - 1;i++){
            cin >> b[i];
        }
        int ok = true;
        for(int i = 0;i < n-1;i++){
            if(a[i] != b[i]){
                cout << i + 1 << '\n';
                ok = false;
                break;
            }
        }
        if(ok){
            cout << n << "\n";
        }
    }
    return 0;
}