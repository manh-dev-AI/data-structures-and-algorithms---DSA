#include <bits/stdc++.h>

using namespace std;

int binary_search(long long a[],int n ,long long x){
    long long l = 0;
    long long r = n-1;
    int ans = -1;
    while (l <= r)
    {
        long long mid = (l + r)/2;
        if(a[mid] <= x){
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;;
        }
    }
    if(ans != -1){
        return ans + 1;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , x;
        cin >> n >> x;
        long long a[n + 1];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int index = binary_search(a , n , x);
        cout << index << "\n";
    }
    return 0;
}