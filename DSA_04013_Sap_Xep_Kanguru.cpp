#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int i = 0;
        int j = n / 2;
        int hidden = 0;

        while (i < n / 2 && j < n) {
            if (a[j] >= 2 * a[i]) {
                hidden++;
                i++;
                j++;
            } else {
                j++;
            }
        }

        cout << n - hidden << '\n';
    }
}