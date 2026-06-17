#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    return c=='+' || c=='-' || c=='*' || c=='/' || c=='^';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        stack<string> st;

        for(char c : s){
            if(isalnum(c)){
                st.push(string(1, c));
            }
            else{
                string op2 = st.top(); st.pop();
                string op1 = st.top(); st.pop();

                string tmp = "(" + op1 + c + op2 +  ")";
                st.push(tmp);
            }
        }

        cout << st.top() << "\n";
    }
    return 0;
}