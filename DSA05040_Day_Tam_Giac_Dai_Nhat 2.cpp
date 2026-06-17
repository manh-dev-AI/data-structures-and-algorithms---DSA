#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n + 1 );
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        vector<int> lis(n + 1, 1);
        vector<int> lds(n + 1, 1);
        for(int i = 1;i <= n;i++){
            for(int j = 1;j < i;j++){
                if(a[j] <= a[i]){
                    lis[i] = max(lis[i] , lis[j] + 1);
                }
            }
        }
        for(int i = n;i >= 1;i--){
            for(int j = n;j > i;j--){
                if(a[i] >= a[j]){
                    lds[i] = max(lds[i] , lds[j] + 1); 
                }
            }
        }
        int ans = 0;
        int index = 0;
        for(int i = 1;i <= n;i++){
            if(ans < (lis[i] + lds[i] )){
                index = i;
                ans = (lis[i] + lds[i]);
            }
        }
        cout << lis[index] + lds[index] - 1 << "\n"; 
    }
    return 0;
}