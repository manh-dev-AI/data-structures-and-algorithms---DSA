#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<int> st;
    for(int i = s.length() - 1;i >= 0;i--){
        if(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/'){
            int a = s[i] -'0';
            st.push(a);
        }
        else {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(s[i] == '+'){
                int so = a + b;
                st.push(so);
            }
            else if(s[i] == '-'){
                int so = a - b;
                st.push(so);
            }
            else if(s[i] == '*'){
                int so = a*b;
                st.push(so);
            }
            else {
                int so = a/b;
                st.push(so);
            }
        }
    }
    cout << st.top() << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}