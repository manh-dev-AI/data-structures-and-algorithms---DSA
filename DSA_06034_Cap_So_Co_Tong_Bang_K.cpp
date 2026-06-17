#include <bits/stdc++.h>

using namespace std;

long long check(vector<int> a, int n, int k){
    long long cnt = 0;
    int l = 0, r = n - 1;

    while(l < r){
        if(a[l] + a[r] == k){
            if(a[l] != a[r]){
                int x = a[l];
                int y = a[r];
                int cntL = 0,cntR = 0;
                while(l <= r && x == a[l]){
                    l++;
                    cntL++;
                }
                while(l <= r && y == a[r]){
                    r--;
                    cntR++;
                }
                cnt += 1LL * cntL * cntR;
            }
            else {
                int m = r - l + 1;
                cnt += 1LL * m * (m - 1) / 2;  
                break;          
            }
        }
        else if(a[l] + a[r] > k){
            r--;
        }
        else {
            l++;
        }
    }
    return cnt;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a){
            cin >> x;
        }
        sort(a.begin() , a.end());
        cout << check(a , n , k) << "\n";
    }
    return 0;
}