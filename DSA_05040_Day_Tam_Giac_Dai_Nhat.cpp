#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> tang(n, 1), giam(n, 1);

        for(int i = 1; i < n; i++){
            if(a[i] > a[i-1])
                tang[i] = tang[i-1] + 1;
        }


        for(int i = n-2; i >= 0; i--){
            if(a[i] > a[i+1])
                giam[i] = giam[i+1] + 1;
        }

        int ans = 1;
        for(int i = 0; i < n; i++){
            ans = max(ans, tang[i] + giam[i] - 1);
        }

        cout << ans << "\n";
    }
}