#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int d , c;
        cin >> d >> c;
        vector<int> v[d + 1];
        while(c--){
            int dau , cuoi;
            cin >> dau >> cuoi;
            v[dau].push_back(cuoi);
        }
        
        for(int i = 1;i <= d;i++){
            cout << i << ": ";
            for(auto r : v[i]){
                cout << r << " ";
            }
            cout << endl;
        }
    }
    return 0;
}