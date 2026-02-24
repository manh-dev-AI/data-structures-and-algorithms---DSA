#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        map<int,int> mp;
        set<int> s1;
        set<int> s2;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            s1.insert(a[i]);
        }
        for(int i = 0;i < m;i++){
            cin >> b[i];
            s2.insert(b[i]);
        }
        for(int x : s1){
            mp[x]++;
        }
        for(int x : s2){
            mp[x]++;
        }
        for(auto x : mp){
            cout << x.first << " ";
        }
        cout << "\n";
        for(auto x : mp){
            if(x.second > 1){
                cout << x.first << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}