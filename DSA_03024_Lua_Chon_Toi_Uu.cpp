#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> a;
        for(int i = 0;i < n;i++){
            int x,y;
            cin >> x >> y;
            a.push_back({x , y});
        }
        sort(a.begin() , a.end() , [](auto x , auto y){
            return x.second < y.second;
        });
        int cnt = 1;
        int end = a[0].second;
        for(int i = 1;i < n;i++){
            if(a[i].first >= end){
                end = a[i].second;
                cnt++;
            }
        }
        cout << cnt << "\n";
       
    }
    return 0;
}