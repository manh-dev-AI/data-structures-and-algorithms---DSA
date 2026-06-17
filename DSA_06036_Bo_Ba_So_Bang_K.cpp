#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> a,int n,int k){
    for(int i = 0;i < n;i++){
        int so = k - a[i];
        int l = i + 1;
        int r = n - 1;
        while(l < r){
            int sum = a[l] + a[r];
            if(sum == so){
                return true;
            }
            else if(sum > so){
                r--;
            }
            else {
                l++;
            }
        }

    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k ;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a){
            cin >> x;
        }
        sort(a.begin() , a.end());
        if(check(a , n , k)){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    
    return 0;
}