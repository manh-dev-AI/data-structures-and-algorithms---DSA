#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < m;i++){
            cin >> b[i];
        }
        int cnt = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                double x1 = 1.0 * log(b[j])/log(a[i]);
                double x2 = 1.0 * b[j] / a[i];
                if(x1 < x2){
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    
    return 0;
}