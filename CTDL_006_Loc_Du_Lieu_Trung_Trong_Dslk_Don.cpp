#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    map<int,int> mp;
    for ( int &i : a){
        cin >> i;
    }
    
    for (int i = 0;i < n;++i){
        if (mp[a[i]] == 0){
            cout << a[i] << " ";
            mp[a[i]] = 1;
        }
        
    }
    return 0;
}