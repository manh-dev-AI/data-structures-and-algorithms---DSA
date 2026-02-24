#include <bits/stdc++.h>

using namespace std;

void test(){
    int n;
    cin >> n;
    int start[n] , end[n];
    for(int i = 0;i < n;i++){
        cin >> start[i];
    }
    for(int i = 0;i < n;i++){
        cin >> end[i];
    }
    vector<pair<int,int>> a;
    for(int i = 0;i < n;i++){
        a.push_back({start[i], end[i]});
    }
    sort(a.begin() , a.end() , [](pair<int,int> x,pair<int,int> y){
        return x.second < y.second;
    });
    int last_end = a[0].second;
    int cnt = 1;
    for(int i = 1;i < n;i++){
        if(a[i].first >= last_end){
            last_end = a[i].second;
            cnt++;
        }
    }
    cout << cnt << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}