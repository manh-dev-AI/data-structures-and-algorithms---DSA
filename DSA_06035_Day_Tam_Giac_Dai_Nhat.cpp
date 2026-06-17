#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        vector<int> lis(n , 1) , lds(n , 1);
        
        for(int i = 1;i < n;i++){
            if(a[i] > a[i-1]){
                lis[i] = lis[i - 1] + 1;
            }
        } 
        for(int j = n - 2;j >= 0;j--){
            if(a[j] > a[j + 1]){
                lds[j] = lds[j + 1] + 1;
            }
        }
        int ans = 1;
        for(int i = 0;i < n;i++){
            ans = max(ans , lis[i] + lds[i] - 1);
        }
        cout << ans << "\n";
    }
    
    return 0;
}