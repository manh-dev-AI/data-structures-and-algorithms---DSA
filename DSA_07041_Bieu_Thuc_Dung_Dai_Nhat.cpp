#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt = 0;
        string s;
        cin >> s;
        stack<char> st;
        for(char c : s){
            if(c == ')'){
                while(!st.empty() && st.top() != '('){
                    st.pop();
                }
                if(!st.empty())  {
                    st.pop();
                    cnt += 2;
                }
            }
            else st.push(c);
        }
        cout << cnt << "\n";
    }
    return 0;
}