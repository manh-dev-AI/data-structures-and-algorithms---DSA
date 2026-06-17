#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string res = "";
        stack<int> st;
        for(int i = 0;i <= s.size();i++){
            st.push(i + 1);

            if(i == s.size() || s[i] == 'I'){
                while(!st.empty()){
                    res += to_string(st.top());
                    st.pop();
                }
            }
l 
        }
        cout << res << "\n";
    }
    return 0;
}