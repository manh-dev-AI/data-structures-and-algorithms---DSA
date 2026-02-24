#include<bits/stdc++.h>

using namespace std;

const int m = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a.begin() , a.end());
        long long sum = 0;
        for(int i = 0;i < n;i++){
            sum += (a[i] % m * i  % m) % m;
        }
        cout << sum % m << "\n";
           
    }
    return 0;
}

