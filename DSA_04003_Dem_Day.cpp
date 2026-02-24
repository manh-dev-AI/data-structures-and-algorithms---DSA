#include <bits/stdc++.h>

using namespace std;

const long long MOD = 123456789;


long long power(long long a, long long b) {
    if (b == 0) return 1;
    long long t = power(a, b / 2);
    t = (t * t) % MOD; // Tính t^2 trước để code gọn hơn
    if (b % 2 == 0) return t;
    return (t * (a % MOD)) % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;

        cout << power(2, n - 1) << endl;
    }
    return 0;
}


/*
bài toán chia kẹo euler 
dãy có tổng = n 
nếu dãy có k phần tử thì ta có k - 1 ô trống , có n-1 chỗ để đặt vách ngăn --> có C{k - 1,n-1}
tổng từ 1 - n của C{i - 1,n-1} = 2^n-1 theo nhị thức newton 
*/