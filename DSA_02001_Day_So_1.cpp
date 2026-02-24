#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        auto print = [&](const vector<long long>& v) {
            cout << "[";
            for (int i = 0; i < (int)v.size(); i++) {
                cout << v[i];
                if (i + 1 < (int)v.size()) cout << " ";
            }
            cout << "]\n";
        };

        print(a);

        while ((int)a.size() > 1) {
            vector<long long> b((int)a.size() - 1);
            for (int i = 0; i < (int)b.size(); i++) {
                b[i] = a[i] + a[i + 1];
            }
            a.swap(b);
            print(a);
        }
    }
    return 0;
}
