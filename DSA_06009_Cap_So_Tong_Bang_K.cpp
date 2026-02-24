#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long cnt = 0;
        int l = 0, r = n - 1;

        while(l < r){
            long long sum = a[l] + a[r];

            if(sum < k){
                l++;
            }
            else if(sum > k){
                r--;
            }
            else{ // sum == k
                if(a[l] == a[r]){
                    long long len = r - l + 1;
                    cnt += len * (len - 1) / 2;
                    break;
                }
                else{
                    long long cntL = 1, cntR = 1;

                    while(l + 1 < r && a[l] == a[l + 1]){
                        cntL++;
                        l++;
                    }
                    while(r - 1 > l && a[r] == a[r - 1]){
                        cntR++;
                        r--;
                    }

                    cnt += cntL * cntR;
                    l++;
                    r--;
                }
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}
