#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        stack<string> st;
        string s;
        cin >> s;
        for(int i = s.size() - 1;i >= 0;i--){
            if(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/'){
                st.push(string(1 , s[i]));
            }
            else {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string tmp = "(" + a + string(1 , s[i]) + b + ")";
                st.push(tmp);
            }
        }
        string xau = "";
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << xau << "\n";
    }
    return 0;
}