#include <bits/stdc++.h>

using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m , k;
        cin >> n >> m >> k;
        vector<int> a[n + 1];
        for(int i = 0;i < m;i++){
            int u , v;
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        queue<int> qu;
        vector<bool> check(n + 1, false);
        qu.push(k);
        check[k] = true;
        while(!qu.empty()){
            int s  = qu.front();
            qu.pop();

            cout << s << " ";
            for(int v : a[s]){
                if(!check[v]){
                    qu.push(v);
                    check[v] = true;
                }
            }
        }
        cout << "\n";

    }
    return 0;
}