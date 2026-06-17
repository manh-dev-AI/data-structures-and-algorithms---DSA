#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long ans = 0;

        for(int i = 0; i < n - 2; i++){
            long long tong = 1LL * k - a[i];

            int l = i + 1;
            int r = n - 1;

            while(l < r){
                if(a[l] + a[r] < tong){
                    ans += (r - l);
                    l++;
                } else {
                    r--;
                }
            }
        }

        cout << ans << "\n";
    }
}