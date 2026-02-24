#include <bits/stdc++.h>

using namespace std;


void test(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a){
        cin >> x;
    }

    sort(a, a + n);

    k = min(k, n - k);   // 🔥 FIX LOGIC

    long long sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        if(i < k){
            sum1 -= a[i];
            sum2 += a[i];
        } else {
            sum1 += a[i];
            sum2 -= a[i];
        }
    }

    cout << max(sum1, sum2) << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}