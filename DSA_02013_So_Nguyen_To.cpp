#include <bits/stdc++.h>
using namespace std;

int n, p, s;

bool ktnt(int m){
    if(m < 2) return false;

    for(int i = 2; i * i <= m; i++){
        if(m % i == 0){
            return false;
        }
    }
    return true;
}

vector<vector<int>> ans;
vector<int> cur;
vector<int> prime;

void backtrack(int pos, int cnt, int sum){
    if(sum > s) return;

    if(cnt == n){
        if(sum == s){
            ans.push_back(cur);
        }
        return;
    }

    for(int i = pos; i < prime.size(); i++){
        cur.push_back(prime[i]);

        backtrack(i + 1, cnt + 1, sum + prime[i]);

        cur.pop_back();
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 2; i <= 200; i++){
        if(ktnt(i)){
            prime.push_back(i);
        }
    }

    while(t--){
        cin >> n >> p >> s;

        ans.clear();
        cur.clear();

        int start = upper_bound(prime.begin(), prime.end(), p) - prime.begin();

        backtrack(start, 0, 0);

        cout << ans.size() << "\n";

        for(auto v : ans){
            for(int x : v){
                cout << x << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}