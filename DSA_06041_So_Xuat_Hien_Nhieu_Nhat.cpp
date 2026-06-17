#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        unordered_map<int , int> mp;
        for(int i = 0;i < n;i++){
            mp[a[i]]++;
        }
        int key =0;
        int value = 0;
        for(auto x : mp){
            if(key < x.second){
                key = x.second;
                value = x.first;
            }
        }
        if(float(key) > float(n / 2)){
            cout << value << "\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}