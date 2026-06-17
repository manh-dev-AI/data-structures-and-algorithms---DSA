#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int > a(n);
        for(int &x : a){
            cin >> x;
        }
        sort(a.begin() , a.end());
        int ans = INT_MAX;
        for(int i = 0;i < n - 1;i++){
            ans = min(a[i + 1] - a[i] , ans);
        }
        cout << ans << "\n";
    }
    return 0;
}