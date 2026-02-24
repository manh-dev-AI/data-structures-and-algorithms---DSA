#include <bits/stdc++.h>
using namespace std;

int merge(int a[], int b[], int m, int n, int k) {
    int i = 0, j = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            if (i + j + 1 == k)
                return a[i];
            i++;
        } else {
            if (i + j + 1 == k)
                return b[j];
            j++;
        }
    }

    while (i < m) {
        if (i + j + 1 == k)
            return a[i];
        i++;
    }


    while (j < n) {
        if (i + j + 1 == k)
            return b[j];
        j++;
    }

    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n, k;
        cin >> m >> n >> k;

        int a[m], b[n];
        for (int i = 0; i < m; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int index = merge(a, b, m, n, k);
        cout <<index  << "\n";
    }
    return 0;
}
