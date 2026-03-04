#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<pair<int,int>,int>> a;
        int maxDeadline = 0;
        for(int i = 0;i < n;i++){
            int x,y,z;
            cin >> x >> y >> z;
            maxDeadline = max(y , maxDeadline);
            a.push_back({{x , y } , z});
        }
        sort(a.begin() , a.end() , [&](auto x,auto y){
            return x.second > y.second;
        });
        long long result = 0;
        int cnt = 0;
        
        vector<int> slot(maxDeadline + 1, -1);
        for(int i = 0;i < n;i++){
            for(int j = a[i].first.second;j >= 1;j--){
                if(slot[j] == -1){
                    cnt++;
                    slot[j] = 1;
                    result += a[i].second;
                    break;
                }
            }
        }
        cout << cnt << " " << result << "\n";
    }
    
    return 0;
}