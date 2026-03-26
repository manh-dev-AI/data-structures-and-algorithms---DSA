#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin  >> n >> m;
        vector<int> a[n + 1];
        for(int i = 0;i < m;i++){
            int u , v;
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i = 1;i <= n;i++){
            cout << i << ":";
            for(int x : a[i]){
                cout << " " << x;
            }
            cout << "\n";
        }
    }
    return 0;
}