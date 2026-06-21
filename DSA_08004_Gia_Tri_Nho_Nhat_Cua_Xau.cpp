#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        string s;
        cin >> s;
        map<char ,int> mp;
        for(char c : s){
            mp[c]++;
        }
        priority_queue<int> qu;
        for(auto x : mp){
            qu.push(x.second);
        }
        
        while(!qu.empty() && k > 0){
            int x = qu.top();
            qu.pop();
            qu.push(x - 1);
            k--;
        }
        long long ans = 0;
        while(!qu.empty()){
            ans += 1LL*pow(qu.top() , 2);
            qu.pop();
        }
        cout << ans << "\n";
    }
    return 0;
}