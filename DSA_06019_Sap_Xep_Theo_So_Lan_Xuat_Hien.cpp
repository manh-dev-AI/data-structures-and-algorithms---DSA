#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<pair<int,int>> v;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            bool found = false;
            for(auto &p : v){
                if(p.first == x){
                    p.second++;  
                    found = true;
                    break;
                }
            }

            if(!found){
                v.push_back({x, 1});
            }
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second > b.second;
        });

        for(auto &p : v){
            int e = p.second;
            while(e > 0){
                cout << p.first << " ";
                e--;
            }
        }
        cout << "\n";
    }
    return 0;
}
