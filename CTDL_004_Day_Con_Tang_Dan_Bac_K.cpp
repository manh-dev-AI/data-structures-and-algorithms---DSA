#include <bits/stdc++.h>

using namespace std;



int main(){
    int n,k;
    cin >> n >> k;
    int a[n + 1];
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    int x[n + 1];
    for(int i = 1;i <= k;i++){
        x[i] = i;
    }
    int res = 0;
    while(true){
        bool ok = true;
        for(int i = 1;i < k;i++){
            if(a[x[i]] >= a[x[i + 1]]){
                ok = false;
                break;
            }
        }

        if(ok) res++;
        int i = k;
        while(i >= 1 && x[i] == n - k + i){
            i--;
        }
        if(i == 0){
            break;
        }
        x[i]++;
        for(int j = i + 1;j <= k;j++){
            x[j] = x[j - 1] + 1;
        }


    }
    cout << res << "\n";
    
    return 0;
}