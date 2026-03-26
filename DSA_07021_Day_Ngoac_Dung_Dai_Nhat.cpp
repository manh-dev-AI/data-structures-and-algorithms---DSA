#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    stack<int> st;
    st.push(-1);   // mốc ban đầu
    int ans = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                ans = max(ans, i - st.top());
            }
        }
    }
/*
s[0] = ( --> st = -1 , 0            |  s[0] = ) --> st = {} --> st = 0
s[1] = ) --> st = -1 , ans = 1      |  s[1] = ( --> st = 0,1
s[2] = ( --> st = -1,2              |  s[2] = ) --> st = 0 --> ans = 2 - 0 = 2
s[3] = ( --> st = -1,2,3            |  s[3] = ( --> st = 0,3
s[4] = ) --> st = -1,2              |  s[4] = ) --> st = 0 , and = 4-0 = 4
ans = 4-2 = 2                       |
*/
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
