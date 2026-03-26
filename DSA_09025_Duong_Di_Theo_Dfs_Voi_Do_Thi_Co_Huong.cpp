#include <bits/stdc++.h>
using namespace std;

vector<int> a[1005];
bool visited[1005];
vector<int> road;
bool ok = false;

void dfs(int u, int v) {
    visited[u] = true;
    road.push_back(u);

    if (u == v) {
        ok = true;
        for (int x : road) cout << x << " ";
        return;
    }

    for (int x : a[u]) {
        if (!visited[x] && !ok) {
            dfs(x, v);
        }
    }

    if (!ok) road.pop_back();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, s, t;
        cin >> n >> m >> s >> t;

        for (int i = 1; i <= n; i++) {
            a[i].clear();
            visited[i] = false;
        }

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            a[u].push_back(v);
        }

        road.clear();
        ok = false;

        dfs(s, t);

        if (!ok) cout << -1;
        cout << "\n";
    }
    return 0;
}