#include <bits/stdc++.h>
using namespace std;

vector<int> used;
vector<int> x;
int n;

void in() {
    for (int i = 1; i <= n; i++) cout << x[i];
    cout << "\n";
}
int cnt = 1;
void Try(int i, const vector<int>& a) {
    for (int j = 1; j <= n; j++) {
        if (!used[j]) {
            used[j] = 1;
            x[i] = j;

            if (i == n) {
                if (x == a) cout << cnt << "\n";
                else cnt++;
            } else {
                Try(i + 1, a);
            }

            used[j] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        used.assign(n + 1, 0);
        x.assign(n + 1, 0);   
        
        Try(1, a);
        cnt = 1;
    }
    return 0;
}
