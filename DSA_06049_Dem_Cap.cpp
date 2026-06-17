#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long ans = 0;

        int j = 1;

        for(int i = 0; i < n; i++) {

            if(j <= i)
                j = i + 1;

            while(j < n && a[j] - a[i] < k)
                j++;

            ans += (j - i - 1);
        }

        cout << ans << "\n";
    }

    return 0;
}

// a[j] - a[i] < k -- a[j] < a[i] + k --> tìm vị trí đầu tiên >= a[i] +  

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int t;
//     cin >> t;

//     while(t--) {

//         int n, k;
//         cin >> n >> k;

//         vector<int> a(n);

//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         sort(a.begin(), a.end());

//         long long ans = 0;

//         for(int i = 0; i < n; i++) {

//             int pos = lower_bound(a.begin() + i + 1,
//                                   a.end(),
//                                   a[i] + k) - a.begin();

//             ans += (pos - i - 1);
//         }

//         cout << ans << "\n";
//     }

//     return 0;
// }