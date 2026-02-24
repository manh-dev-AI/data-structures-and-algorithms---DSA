#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        stack<char> st;
        string s;
        getline(cin , s);

        bool ok = false; // ok = có ngoặc thừa

        for(char c : s){
            if(c == ')'){
                bool xet = false; // xet = có toán tử hay không

                while(!st.empty() && st.top() != '('){
                    if(st.top() == '+' || st.top() == '-' ||
                       st.top() == '*' || st.top() == '/'){
                        xet = true;
                    }
                    st.pop();
                }

                st.pop(); // pop '('

                if(!xet){ // ❗ ngoặc thừa
                    ok = true;
                    break;
                }
            }
            else{
                st.push(c);
            }
        }

        if(ok){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}
