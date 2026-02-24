#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int MAX = INT_MIN;
        int MIN = INT_MAX;
        for(int i= 0;i < n;i++){
            int x;
            cin >> x;
            MAX = max(MAX , x);
        }
        for(int i = 0;i < m;i++){
            int x;
            cin >> x;
            MIN = min(MIN , x);
        }
        long long tich = (long long)MAX * MIN;

        cout << tich << "\n";
    }
    return 0;
}