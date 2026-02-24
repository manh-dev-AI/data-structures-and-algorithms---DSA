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

        auto print = [&](const vector<long long>& arr) {
            cout << "[";
            for (int i = 0; i < (int)arr.size(); i++) {
                cout << arr[i];
                if (i + 1 < (int)arr.size()) cout << " ";
            }
            cout << "] ";
        };

        vector<vector<long long>> v;
        v.push_back(a);              // lưu dòng đầu

        while ((int)a.size() > 1) {
            vector<long long> b((int)a.size() - 1);
            for (int i = 0; i < (int)b.size(); i++) {
                b[i] = a[i] + a[i + 1];
            }
            v.push_back(b);          // lưu dòng mới
            a = b;                   // cập nhật để vòng lặp tiến tiếp
        }

        // in ra
        int j = 0;
        for(auto it = v.rbegin();it != v.rend();it++){
            print(*it);

        }
        cout << endl;
    }
    return 0;
}
