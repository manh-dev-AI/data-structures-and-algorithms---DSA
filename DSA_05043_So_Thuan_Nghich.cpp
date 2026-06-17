#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int ans = 1;

        for(int i = 0; i < n; i++){
            
            int l = i, r = i;
            while(l >= 0 && r < n && s[l] == s[r]){
                ans = max(ans, r - l + 1);
                l--; r++;
            }

           
            l = i; r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r]){
                ans = max(ans, r - l + 1);
                l--; r++;
            }
        }

        cout << ans << "\n";
    }
}