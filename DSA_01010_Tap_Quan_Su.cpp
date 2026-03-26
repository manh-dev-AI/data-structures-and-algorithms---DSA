#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>> k;
        int cnt = 0;
        vector<int> a(k + 1) , b(k + 1);
        for(int i = 1;i <= k;i++){
            cin >> a[i];
            b[i] = a[i];
        }
        int i = k;
        while(i >= 1 && b[i] == n - k + i){
            i--;
        }
        if(i == 0){
            cout << k << "\n";
            continue;
        }
        b[i]++;
        for(int j = i + 1;j <= k;j++){
            b[j] = b[j-1] + 1;
        }
        for(int j = 1;j <= k;j++){
            auto it = find(a.begin() , a.end() , b[j]);
            if(it != a.end()){
                cnt++;
            }
        }
        cout << k - cnt << "\n";
    }
    return 0;
}