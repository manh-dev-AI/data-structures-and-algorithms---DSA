#include <bits/stdc++.h>

using namespace std;

int danhgia(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-') return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        string res = "";
        for(char c : s){
            if(isalpha(c) || isdigit(c)){
                res += c;
            }
            else if(c == '('){
                st.push(c);
            }
            else if(c == ')'){
                while(!st.empty() && st.top() != '('){
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else {
                while(!st.empty() && danhgia(st.top()) >= danhgia(c)){
                    res += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        while(!st.empty()){
            if(st.top() == '('){
                st.pop();
                continue;
            }
            res += st.top();
            st.pop();
        }
        cout << res << "\n";
    }
    return 0;
}
