#include <bits/stdc++.h>

using namespace std;

vector<int> a[1005];
bool check[1005];
vector<int> prior(1005 , -1);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m , p , q;
        cin >> n >> m >> p >> q;
        for (int i = 1; i <= n; i++) {
            a[i].clear();
            check[i] = false;
        }
        for(int i = 0;i < m;i++){
            int u , v ; cin >> u ;
            cin >> v;
            a[u].push_back(v);
        }
        queue<int> qu;
        qu.push(p);
        check[p] = true;
        prior[p] = -1;
        while(!qu.empty()){
            int s = qu.front();
            qu.pop();
            for(int v : a[s]){
                if(!check[v] ){
                    qu.push(v);
                    check[v] = true;
                    prior[v] = s;
                }
            }
        }
        if(!check[q]){
            cout << "-1\n";
        }
        else{
            vector<int> road;
            for(int u = q;u != -1;u = prior[u]){
                road.push_back(u);
            }
            reverse(road.begin() , road.end());
            for(int x : road){
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}