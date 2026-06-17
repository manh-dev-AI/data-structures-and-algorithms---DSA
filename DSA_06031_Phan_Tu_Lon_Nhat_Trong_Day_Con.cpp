#include <bits/stdc++.h>

using namespace std;

int max_day(vector<int> a,int k){
    int ans = 0;
    for(auto x : a){
        ans = max(ans , x);
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a){
            cin >> x;
        }
        for(int i = 0;i < n - k + 1;i++){
            cout << max_day(vector<int>(a.begin() + i, a.begin() + k + i), k) << " ";
        }
        cout << "\n";
    }
    return 0;
}