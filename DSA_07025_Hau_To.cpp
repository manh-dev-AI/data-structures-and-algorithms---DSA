#include <bits/stdc++.h>
using namespace std;

long long myStoi(const string &s) {
    if (s.empty()) return 0;

    long long res = 0, sign = 1;
    long long i = 0;

    if (s[0] == '-') {
        sign = -1;
        i = 1;
        if (s.size() == 1) return 0;
    }

    for (; i < s.size(); i++) {
        if (!isdigit(s[i])) return 0;
        res = res * 10 + (s[i] - '0');
    }
    return sign * res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        stack<long long> st;

        while (n--) {
            string s;
            cin >> s;

            if (s == "+" || s == "–" || s == "*" || s == "/") {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();

                if (s == "+") {
                    long long so = a + b;
                    st.push(so);
                }
                else if (s == "–") {
                    long long so = a - b;
                    st.push(so);
                }
                else if (s == "*") {
                    long long so = a * b;
                    st.push(so);
                }
                else {
                    long long so = a/b;
                    st.push(so);
                }  
            }
            else {
                long long r = myStoi(s);
                st.push(r);
            }
        }

        cout << st.top() << "\n";
    }

    return 0;
}
