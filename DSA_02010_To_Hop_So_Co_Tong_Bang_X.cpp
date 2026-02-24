#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, cur;
bool ok;

void backtrack(int pos, int sum){
    if(sum == k){
        ok = false;
        cout << "[";
        for(int i = 0; i < cur.size(); i++){
            cout << cur[i];
            if(i + 1 < cur.size()) cout << " ";
        }
        cout << "]";
        return;
    }
    if(sum > k) return;

    for(int j = pos; j < n; j++){
        cur.push_back(a[j]);
        backtrack(j, sum + a[j]);
        cur.pop_back();
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        a.resize(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end()); 
        n = a.size();

        cur.clear();
        ok = true;

        backtrack(0, 0);

        if(ok) cout << "-1";
        cout << "\n";
    }
    return 0;
}
