#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    queue<long long> qu;
    qu.push(1);
    vector<long long> ans;
    while(!qu.empty()){
        long long s = qu.front();
        qu.pop();

        ans.push_back(s);

        if(s <= 1e18 / 10){
            qu.push(s * 10);
            qu.push(s * 10 + 1);
        }

    }
    while(t--){
        long long n;
        cin >> n;
        int kqua = upper_bound(ans.begin() , ans.end() , n) - ans.begin();
        cout << kqua << "\n";

    }
    return 0;
}