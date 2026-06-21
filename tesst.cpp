#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        stack<long long> st;
        for(int i = n - 1;i >=0;i--){
            if(a[i] == "+" || a[i] == "-" || a[i] == "*" || a[i] == "/"){
                long long s1 = st.top(); st.pop();
                long long s2 = st.top(); st.pop();
                if(a[i] == "+"){
                    long long ans = s1 + s2;
                    st.push(ans);
                }
                if(a[i] == "-"){
                    long long ans = s1 - s2;
                    st.push(ans);
                }
                if(a[i] == "*"){
                    long long ans = s1 * s2;
                    st.push(ans);
                }
                if(a[i] == "/"){
                    long long ans = s1 / s2;
                    st.push(ans);
                }
            }
            else {
                st.push(stoll(a[i]));
            }
        }
        cout << st.top() << "\n";
    }
    return 0;
}