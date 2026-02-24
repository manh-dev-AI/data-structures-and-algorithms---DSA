#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        auto it = find(a , a + n, k);
        if(it != a + n){
            int index = it - a;
            cout << index + 1 << "\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}