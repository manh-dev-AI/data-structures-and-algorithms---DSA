#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin  >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1;i <= n;i++){ 
            cin >> a[i];
        }
        stack<int> st;
        a[0] = INT_MAX;
        int b[n + 1];
        for(int i = 0;i <= n;i++){
            while(!st.empty() && a[st.top()] <= a[i]){
                st.pop();
            }
            if(st.empty()) b[i] = i;
            else if(a[st.top()] > a[i]) b[i] = st.top();
            st.push(i);
        }
        for(int i = 1;i <= n;i++){
            cout << i - b[i]  << " ";
        }
        cout << "\n";
    }
    return 0;
}