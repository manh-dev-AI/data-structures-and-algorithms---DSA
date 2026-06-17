#include <bits/stdc++.h>

using namespace std;

vector<int> tinh(vector<int> a,vector<int> b){
    int n = a.size() ;
    int m = b.size() ;
    vector<int> ans(n + m , 0);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            int mul = a[i] * b[j];
            ans[i + j] += mul;
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;
        vector<int> a(n) , b(m);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < m;i++){
            cin >> b[i];
        }
        vector<int> ans = tinh(a , b);
        for(int i = 0;i < n + m - 1;i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}