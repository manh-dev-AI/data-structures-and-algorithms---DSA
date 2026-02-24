#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
        }
        sort(a , a+n);
        
        long long so = 0;
        int luythua = n/2 - 1;
        if(n % 2 == 1){
            luythua ++;
        }

        for(int i = 0;i < n;i+= 2){
            so += 1ll * a[i] * pow(10 , luythua);
            luythua--;
        }
        luythua = n/2-1;
        for(int i = 1;i < n;i+= 2){
            so += 1ll * a[i] * pow(10 , luythua);
            luythua --;
        }
        cout << so << "\n";
    }
    return 0;
}