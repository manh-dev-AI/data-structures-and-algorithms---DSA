#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        vector<long long> A(N), B(M), C(K);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < M; i++) cin >> B[i];
        for (int i = 0; i < K; i++) cin >> C[i];

        int i = 0, j = 0, k = 0;
        bool found = false;

        while (i < N && j < M && k < K) {
            if (A[i] == B[j] && B[j] == C[k]) {
                cout << A[i] << " ";
                found = true;
                i++; j++; k++;   // 🔥 chỉ tăng 1
            }
            else {
                long long mn = min({A[i], B[j], C[k]});
                if (A[i] == mn) i++;
                if (B[j] == mn) j++;
                if (C[k] == mn) k++;
            }
        }

        if (!found) cout << "NO";
        cout << "\n";
    }
    return 0;
}
