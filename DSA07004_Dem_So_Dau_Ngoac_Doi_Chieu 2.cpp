#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ngph = 0;
        stack<char> st;
        for(char c : s){
            if(c == ')'){
                if(!st.empty()){
                    st.pop();
                }
                else {
                    ngph++;
                }
                
            }
            else {
                st.push(c);
            }
        }
        int cnt = ceil(1.0 * ngph / 2) + ceil(1.0 * st.size()/2);
        cout << cnt << "\n";
    }
    return 0;
}