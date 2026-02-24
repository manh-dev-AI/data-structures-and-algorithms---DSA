#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0;i < n;i++){
            cin >> v[i];
        }
        auto it  = find(v.begin() , v.end() , k);
        if(it != v.end()){
            int cnt = count(v.begin() , v.end() , k);
            cout << cnt << "\n";
        }
        else {
            cout << "-1\n"; 
        }
    }
    return 0;
}