#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<int> st;
    for(char c : s){
        if(c != '+' && c != '-' && c != '*' && c != '/'){
            int a = c -'0';
            st.push(a);
        }
        else {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if(c == '+'){
                int so = a + b;
                st.push(so);
            }
            else if(c == '-'){
                int so = a - b;
                st.push(so);
            }
            else if(c == '*'){
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