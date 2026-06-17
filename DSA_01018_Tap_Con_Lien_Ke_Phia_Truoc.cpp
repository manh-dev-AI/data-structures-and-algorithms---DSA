#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> mask(n, 0);

        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            mask[x - 1] = 1;
        }

        if (next_permutation(mask.begin(), mask.end())) {
            for (int i = 0; i < n; i++) {
                if (mask[i]) cout << i + 1 << " ";
            }
        } else {
            for (int i = n - k + 1; i <= n; i++) {
                cout << i << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}