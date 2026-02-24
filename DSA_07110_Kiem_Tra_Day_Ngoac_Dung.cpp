#include <bits/stdc++.h>


using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        for(char c : s){
            if(c == ']' || c == '}' || c == ')'){
                if(c == ']'){
                    if(!st.empty() && st.top() == '['  ){
                        st.pop();
                    }
                }
                else if(c == '}' ){
                    if( !st.empty() && st.top() == '{' ){
                        st.pop();
                    }
                }
                else if(c == ')' ){
                    if(!st.empty() && st.top() == '(' ){
                        st.pop();
                    }
                }
            }
            else {
                st.push(c);
            }
        }
        if(st.empty()){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}