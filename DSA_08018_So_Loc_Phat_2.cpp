#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> q;
        vector<string> st;
        q.push("6");
        q.push("8");
        st.push_back("6");
        st.push_back("8");
        int cnt = 0;
        while(!q.empty()){
            string s = q.front();
            q.pop();
            
            if(s.size() < n){
                q.push(s + "6");
                q.push(s + "8");
                st.push_back(s + "6");
                st.push_back(s + "8");
                cnt += 2;
            }
            
        }
        cnt += 2;
        cout << cnt << "\n";
            for(auto x : st){
                cout << x << " ";
            }
        
        cout << "\n";
    }
    return 0;
}