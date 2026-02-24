#include<bits/stdc++.h>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    vector<vector<int>> a(n , vector<int> (m,0));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    
    return 0;
}