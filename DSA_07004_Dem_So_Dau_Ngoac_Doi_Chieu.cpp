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
            if(c == ')' && !st.empty() && st.top() == '('){
                st.pop();
            } else {
                st.push(c);
            }
        }

        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        int cnt1 = 0,cnt2 = 0;
        for(auto c : res){
            if(c == ')'){
                cnt2++;
            }
            else {
                cnt1++;
            }
        }
        int cnt = ceil((float)cnt1/2) + ceil((float)cnt2/2);
        cout << cnt << endl;
    }
    return 0;
}
