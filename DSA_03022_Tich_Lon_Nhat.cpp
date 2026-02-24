#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    long long ans = LLONG_MIN;


    if (n >= 2) {
        ans = max(ans, a[n-1] * a[n-2]);
        ans = max(ans, a[0] * a[1]);
    }


    if (n >= 3) {
        ans = max(ans, a[n-1] * a[n-2] * a[n-3]);
        ans = max(ans, a[0] * a[1] * a[n-1]);
    }

    cout << ans << "\n";
    return 0;
}
