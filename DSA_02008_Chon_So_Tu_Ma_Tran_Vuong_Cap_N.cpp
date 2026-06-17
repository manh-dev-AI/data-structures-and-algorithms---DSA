#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> v;

bool tinh(vector<vector<int>>& a, vector<int>& path){
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans += a[i][path[i]];
    }

    return ans == k;
}

int main(){
    cin >> n >> k;

    vector<vector<int>> a(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    vector<int> b(n);

    for(int i = 0; i < n; i++){
        b[i] = i;
    }

    int cnt = 0;

    do{
        if(tinh(a, b)){
            v.push_back(b);
            cnt++;
        }
    }while(next_permutation(b.begin(), b.end()));
    
    cout << cnt << "\n";
    for(int i = 0;i < cnt;i++){
        for(int x : v[i]){
            cout << x + 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}