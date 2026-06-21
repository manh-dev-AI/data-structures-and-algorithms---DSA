#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> r(n), b(n);

        stack<int> st;

        // Next Greater
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && a[st.top()] <= a[i])
                st.pop();

            r[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Next Smaller
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && a[st.top()] >= a[i])
                st.pop();

            b[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        for(int i = 0; i < n; i++) {
            if(r[i] == -1) {
                cout << -1 << " ";
            }
            else {
                int j = r[i];

                if(b[j] == -1)
                    cout << -1 << " ";
                else
                    cout << a[b[j]] << " ";
            }
        }

        cout << '\n';
    }
}