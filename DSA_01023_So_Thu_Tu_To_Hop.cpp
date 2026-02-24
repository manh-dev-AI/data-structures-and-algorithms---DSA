#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, x;
int cnt;

void Try(int i) {
    for (int j = x[i - 1] + 1; j <= n; j++) {
        x[i] = j;
        if (i == k) {
            if (x == a) {
                cout << cnt << "\n";
            }
            cnt++;
        } else {
            Try(i + 1);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        a.assign(k + 1, 0);
        x.assign(k + 1, 0);

        for (int i = 1; i <= k; i++) cin >> a[i];

        cnt = 1;
        Try(1);
    }
    return 0;
}
