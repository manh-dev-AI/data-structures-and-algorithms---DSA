/*
ý tưởng của bài này là sử lấy tổng tại dãy tăng dần kết thúc tại i
dãy giảm dần bắt đầu từ i và lấy max khi cho nó trừ cho a[i];
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    vector<long long> dp_tang(n + 1, 0);
    vector<long long> dp_giam(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        dp_tang[i] = a[i]; 
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j]) {
                dp_tang[i] = max(dp_tang[i], dp_tang[j] + a[i]);
            }
        }
    }


    for (int i = n; i >= 1; i--) {
        dp_giam[i] = a[i]; 
        for (int j = n; j > i; j--) {
            if (a[i] > a[j]) { 
                dp_giam[i] = max(dp_giam[i], dp_giam[j] + a[i]);
            }
        }
    }


    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res = max(res, dp_tang[i] + dp_giam[i] - a[i]);
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}