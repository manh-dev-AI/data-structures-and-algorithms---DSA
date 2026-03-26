#include<bits/stdc++.h>

using namespace std;

long long tinh(long long a , long long b,string c){
    if(c == "+") return a + b;
    if(c == "-") return a - b;
    if(c == "*") return a * b;
    if(c == "/") return a / b;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> c(n);
        for(int i = 0;i < n;i++){
            cin >> c[i];
        }
        stack<long long> st;
        for(int i = 0;i < n;i++){
            if(c[i] != "+" && c[i] != "-" && c[i] != "*" && c[i] != "/"){
                st.push(stoll(c[i]));
            }
            else {
                long long x = st.top();
                st.pop();
                long long y = st.top();
                st.pop();
                st.push(tinh(y , x ,c[i]));
            }
        }
        cout << st.top() << "\n";
    }
    return 0;
}

