#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        for(char c : s){
            if(c == ']'){
                string kt = "";
                while(!st.empty() && st.top() != "["){
                    kt = st.top() + kt;
                    st.pop();
                }
                if(!st.empty()) st.pop();
                int n;
                string so =  "";
                while(!st.empty() && st.top() >= "0" && st.top() <= "9"){
                    so = st.top() + so;
                    st.pop();
                }
                if(so.empty()) n = 1;
                else n = stoi(so);

                string ans = "";
                for(int i = 0;i < n;i++){
                    ans += kt;
                }
                st.push(ans);
            }
            else st.push(string(1 , c));
        }
        string res = "";

        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }

        cout << res << "\n";
    }
    return 0;
}