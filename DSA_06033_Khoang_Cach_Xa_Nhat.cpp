#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int &x : a) cin >> x;

        int ans = -1;

        int pre_min[n];
        int pre_max[n];
        pre_min[0] = a[0];
        pre_max[n - 1] = a[n - 1];
        for(int i = 1;i < n;i++){
            pre_min[i] = min(a[i], pre_min[i - 1]);
        }
        for(int i = n - 2;i >= 0;i--){
            pre_max[i] = max(pre_max[i + 1] , a[i]);
        }
        int l = 0;
        int r = 0;
        while(l < n && r < n){
            if(pre_max[r] > pre_min[l]){
                ans = max(ans , r  - l);
                r++;
            }
            else {
                l++;
            }
        }
        cout << ans << "\n";
    }
}
// ý tưởng dùng mảng max và min , nếu mà tại vị trí i mà max < min thì lúc này min phải cần bé hơn nữa 
// nếu max lớn hơn min r thì cần tìm vị trí xa nhất mà max có thể lớn hơn min