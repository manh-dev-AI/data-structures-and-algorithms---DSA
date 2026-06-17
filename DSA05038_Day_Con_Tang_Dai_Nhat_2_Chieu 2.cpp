#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b){
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    });

    vector<int> lis;

    for(auto &p : v){
        int y = p.second;

        auto it = lower_bound(lis.begin(), lis.end(), y);

        if(it == lis.end()) lis.push_back(y);
        else *it = y;
    }

    cout << lis.size() << "\n";
}